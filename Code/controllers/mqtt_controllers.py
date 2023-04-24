from paho.mqtt import client as mqtt_client
import random
import time
import json
from datetime import datetime
from threading import Thread

import gpio_control

class MQTTController():
    def __init__(self, sensor_dict) -> None:
        # GPIO pin(s) used for control
        self.gpios = sensor_dict['gpios']
        # Topic name to publish under
        self.topic = sensor_dict['topic']
        # client ID we use for MQTT identification
        self.client_id = sensor_dict['client_id']
        # update rate for time checking
        self.time_control_update_rate =  sensor_dict['update_rate']
        # set times in "good" format for easy checking
        on_times_str    =  sensor_dict['on_interval']
        off_times_str   =  sensor_dict['off_interval']
        self.on_intervals = [[0 for i in range(2)] for j in range(len(on_times_str))]
        for i in range(len(on_times_str)):
            self.on_intervals[i][0] = datetime.strptime(on_times_str[i], '%H:%M:%S')
            self.on_intervals[i][1] = datetime.strptime(off_times_str[i], '%H:%M:%S')

        # init GPIO control
        self.gpio_controller = gpio_control.GPIOController(self.gpios)

        # init MQTT stuff
        self.initMQTTClient()
        self.mqtt_client_ = self.connectMQTT()
        # start thread for recieving messages
        self.mqtt_client_.loop_start()
        # start subscribers
        self.mqttInitSubs()

    """
 
       _   _ _   _ _ _ _           _____                 _   _                 
      | | | | |_(_) (_) |_ _   _  |  ___|   _ _ __   ___| |_(_) ___  _ __  ___ 
      | | | | __| | | | __| | | | | |_ | | | | '_ \ / __| __| |/ _ \| '_ \/ __|
      | |_| | |_| | | | |_| |_| | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \
       \___/ \__|_|_|_|\__|\__, | |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/
                           |___/                                               
 
    """
    def runTimeControl(self):
        while(True):
            # check if we are in "on" period
            self.checkTimeControl()
            # call publisher(s)
            self.mqttState_pub()
            time.sleep(self.time_control_update_rate)


    def checkTimeControl(self):
        time_state = False
        # iterate over time intervals 
        for interval in self.on_intervals:
            time_state = self.inTimeInterval(interval[0], interval[1])
            if (time_state):
                break

        if(time_state):
            # check if we are already in on state
            if(not (self.gpio_controller.state.power == time_state)):
                self.gpio_controller.gpioOn()
        else:
            if(not (self.gpio_controller.state.power == time_state)):
                self.gpio_controller.gpioOff()

    def inTimeInterval(self, on_time, off_time) -> bool:
        '''
        checks if current time is in on_time < now < off_time
        '''
        now = datetime.now()
        on_time = now.replace(hour=on_time.hour, 
                            minute=on_time.minute, 
                            second=on_time.second)
        off_time = now.replace(hour=off_time.hour, 
                            minute=off_time.minute, 
                            second=off_time.second)
        return now > on_time and now < off_time

    """
 
       __  __  ___ _____ _____   ____       _   _   _                  
      |  \/  |/ _ \_   _|_   _| / ___|  ___| |_| |_(_)_ __   __ _ ___  
      | |\/| | | | || |   | |   \___ \ / _ \ __| __| | '_ \ / _` / __| 
      | |  | | |_| || |   | |    ___) |  __/ |_| |_| | | | | (_| \__ \ 
      |_|  |_|\__\_\|_|   |_|   |____/ \___|\__|\__|_|_| |_|\__, |___/ 
                                                            |___/      
 
    """
    def initMQTTClient(self) -> None:
        self.broker = 'localhost'
        self.port = 1883

    def connectMQTT(self):
        def on_connect(client, userdata, flags, rc):
            if rc == 0:
                print("Connected to MQTT Broker!")
            else:
                print("Failed to connect, return code %d\n", rc)

        client = mqtt_client.Client(self.client_id)
        client.on_connect = on_connect
        client.connect(self.broker, self.port)
        return client

    """
 
       ____        _     _ _     _               
      |  _ \ _   _| |__ | (_)___| |__   ___ _ __ 
      | |_) | | | | '_ \| | / __| '_ \ / _ \ '__|
      |  __/| |_| | |_) | | \__ \ | | |  __/ |   
      |_|    \__,_|_.__/|_|_|___/_| |_|\___|_|   
                                                 
 
    """
    def mqttState_pub(self):
        topic_full = self.topic + '/state'
        msg = { "Power"     : self.gpio_controller.state.power, 
                "Blocked"   : self.gpio_controller.state.blocked
                }
        msg_json = json.dumps(msg)
        result = self.mqtt_client_.publish(topic_full, msg_json)
        # result: [0, 1]
        status = result[0]
        if status == 0:
            print(f"Send `{msg}` to topic `{topic_full}`")
        else:
            print(f"Failed to send message to topic {topic_full}")

    """
 
       _     _     _                           
      | |   (_)___| |_ ___ _ __   ___ _ __ ___ 
      | |   | / __| __/ _ \ '_ \ / _ \ '__/ __|
      | |___| \__ \ ||  __/ | | |  __/ |  \__ \
      |_____|_|___/\__\___|_| |_|\___|_|  |___/
                                               
 
    """
    def mqttInitSubs(self):
        # subscribe to all subtopics
        self.mqtt_client_.subscribe(self.topic + '/#')
        # init power, block subscribers
        self.mqttPower_sub()
        self.mqttBlock_sub()

    def mqttPower_sub(self):
        topic_full = self.topic + '/set_power'
        def on_power_message(client, userdata, msg):
            payload = json.loads(msg.payload)
            # turn power on/off depending on payload
            self.gpio_controller.gpioPowerControl(payload['power'])

        self.mqtt_client_.message_callback_add(topic_full, on_power_message)

    def mqttBlock_sub(self):
        topic_full = self.topic + '/set_block'
        def on_block_message(client, userdata, msg):
            payload = json.loads(msg.payload)
            # turn block on/off depending on payload
            self.gpio_controller.gpioBlockControl(payload['block'])

        self.mqtt_client_.message_callback_add(topic_full, on_block_message)

class MQTTControllers():
    """
        This class handles all connected sensors, initializes them as 
        given by the config file and implements subscribers and 
        publishers.
    """

    def __init__(self, conf_dict) -> None:
        self.controller_list = []
        for controller in conf_dict:
            self.controller_list.append(MQTTController(conf_dict[controller]))
            # start time control in threads
            run_thread = Thread(target = self.controller_list[-1].runTimeControl)
            run_thread.start()

