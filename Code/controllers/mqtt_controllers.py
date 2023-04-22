from paho.mqtt import client as mqtt_client
import random
import time

# import gpio_control

class MQTTController():
    def __init__(self, sensor_dict) -> None:
        self.gpios = sensor_dict['gpios']
        self.topic_name = sensor_dict['topic']
        self.client_id = sensor_dict['client_id']
        # set times in "good" format for easy checking
        on_times_str    =  sensor_dict['on_interval']
        off_times_str   =  sensor_dict['off_interval']
        self.on_intervals = [[0 for i in range(2)] for j in range(len(on_times_str))]
        for i in range(len(on_times_str)):
            self.on_intervals[i][0] = datetime.strptime(on_times_str[i], '%H:%M:%S')
            self.on_intervals[i][1] = datetime.strptime(off_times_str[i], '%H:%M:%S')

        # init GPIO control
        # self.gpio_controller = GPIOController(self.gpios)

        # init MQTT stuff
        self.initMQTTClient()
        mqtt_client = self.connectMQTT()
    """
 
       _   _ _   _ _ _ _           _____                 _   _                 
      | | | | |_(_) (_) |_ _   _  |  ___|   _ _ __   ___| |_(_) ___  _ __  ___ 
      | | | | __| | | | __| | | | | |_ | | | | '_ \ / __| __| |/ _ \| '_ \/ __|
      | |_| | |_| | | | |_| |_| | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \
       \___/ \__|_|_|_|\__|\__, | |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/
                           |___/                                               
 
    """
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
                self.gpioOn()
        else:
            if(not (self.gpio_controller.state.power == time_state)):
                self.gpioOff()

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
        self.broker = 'pflanzenkisterl.at'
        self.port = 1883
        # generate client ID with pub prefix randomly
        self.client_id = self.mqtt_client_id
        self.username = 'pflanzenkisterl'
        self.password = '420'

    def connectMQTT(self):
        def on_connect(client, userdata, flags, rc):
            if rc == 0:
                print("Connected to MQTT Broker!")
            else:
                print("Failed to connect, return code %d\n", rc)

        client = mqtt_client.Client(client_id)
        client.username_pw_set(self.username, self.password)
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
    # def mqttState_pub(self):


class MQTTControllers():
    """
        This class handles all connected sensors, initializes them as 
        given by the config file and implements subscribers and 
        publishers.
    """

    def __init__(self, conf_dict) -> None:
        self.controller_list = []
        for controller_dict in conf_dict:
            self.controller_list.append(MQTTController(controller_dict))


