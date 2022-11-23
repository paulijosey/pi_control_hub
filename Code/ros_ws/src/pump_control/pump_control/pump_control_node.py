# @Author: Paul Joseph
# @Email: paul.joseph241@gmail.com
# @Date: 2022-11-20 22:23:15
# @Last Modified by:   undefined
# @Last Modified time: 2022-11-20 22:23:15
# @Description: file:///root/ros_ws/src/pump_control/pump_control/pump_control_node.py
#               Handles the control of the water pump. Common functions like turning on/off 
#               the pump and returning the current operation status.

# ROS libs
import rclpy
from rclpy.node import Node

# ROS srv/msg type definitions
from pi_hub_srvs.srv    import Control     # check service definition in pi_hub_srvs
from std_msgs.msg       import Bool

# common libs
import time
import lgpio
from datetime           import datetime

class Parameters:
    def __init__(self) -> None:
        pass

# lets create a class for the pump controler
class PumpController(Node):
    #     ____                _                   _             
    #    / ___|___  _ __  ___| |_ _ __ _   _  ___| |_ ___  _ __ 
    #   | |   / _ \| '_ \/ __| __| '__| | | |/ __| __/ _ \| '__|
    #   | |__| (_) | | | \__ \ |_| |  | |_| | (__| || (_) | |   
    #    \____\___/|_| |_|___/\__|_|   \__,_|\___|\__\___/|_|   
    def __init__(self):
        super().__init__('pump_control_node')
        
        # get ROS params (it is important that this is called 
        # first, since all configuration parameters will be set 
        # here )
        self.init_ros_parameters()
        # open gpio headers
        self.init_gpio_headers()
        # initialize services
        self.init_services()
        # initialize publishers
        self.init_publishers()
 
    #    ____   ___  ____    _____                 _   _                 
    #   |  _ \ / _ \/ ___|  |  ___|   _ _ __   ___| |_(_) ___  _ __  ___ 
    #   | |_) | | | \___ \  | |_ | | | | '_ \ / __| __| |/ _ \| '_ \/ __|
    #   |  _ <| |_| |___) | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \
    #   |_| \_\\___/|____/  |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/
    def init_ros_parameters(self):
        '''
        Load all ROS parameters that we need for this node.
        Loading from a config file will be handled in the launch file
        '''
        # vaiable to call parameters from everywhere
        self.params = Parameters()

        # decalre ROS parameters (with default values)
        self.declare_parameter('gpio', 15)
        self.declare_parameter('status_update_rate', 30)
        self.declare_parameter('pump_intervals.on', ['0:00:00'])
        self.declare_parameter('pump_intervals.off', ['0:00:00'])

        # set the parameters to values
        self.params.gpio = self.get_parameter('gpio').get_parameter_value().integer_value
        self.params.status_update_rate = self.get_parameter('status_update_rate').get_parameter_value().integer_value
        on_times_str = self.get_parameter('pump_intervals.on').get_parameter_value().string_array_value
        off_times_str = self.get_parameter('pump_intervals.off').get_parameter_value().string_array_value

        # check if on and of times are equal length
        assert len(on_times_str) == len(off_times_str)

        # log output of params we are using
        self.get_logger().info("------------------------------------------------------------------")
        self.get_logger().info("gpio: %s," % (str(self.params.gpio)))
        self.get_logger().info("status_update_rate: %s," % (str(self.params.status_update_rate)))
        self.get_logger().info("pump_intervals.on: %s," % (str(on_times_str)))
        self.get_logger().info("pump_intervals.off: %s," % (str(off_times_str)))
        self.get_logger().info("------------------------------------------------------------------")

        # hacky transform from arrays of strings to array of time values
        # because ROS2 doesn't have time arrays as parameter types
        self.params.on_intervals = [[0 for i in range(2)] for j in range(len(on_times_str))]
        for i in range(len(on_times_str)):
            self.params.on_intervals[i][0] = datetime.strptime(on_times_str[i], '%H:%M:%S')
            self.params.on_intervals[i][1] = datetime.strptime(off_times_str[i], '%H:%M:%S')
        
        # also init the current operating status here (True=pumping)
        self.status = False

    def init_services(self):
        '''
        initialize all service handled by this node.
        '''
        # init service that uses:
        #       "Control" service type,
        #       "pump_control" service name (thats the one we will use on ROS to call it)
        #       and call function "control_callback()"
        self.srv = self.create_service(Control, 
                                        self.get_name()+'/control', 
                                        self.control_callback)

    def init_publishers(self):
        '''
        initialize all publishers and make them spin at given update rates
        '''
        # init publisher 
        self.status_publisher = self.create_publisher( Bool, self.get_name()+'/status', 1)
        # make it publish time at regular intervals.
        # set the update rate as rosparameter in the config file
        self.status_publisher_timer = self.create_timer(self.params.status_update_rate, 
                                                        self.publish_status)

    def control_callback(self, request, response):
        '''
        main control function for the pump.
        We will listen and check if "pump_contorl" service is called somwhere on the 
        ROS network. Depending on the service message contents we will turn on/off the 
        pump
        '''
        # request should either be "1" (turn pump on)
        # or "0" (turn pump off)
        if(request.state == 0):
            response.success = self.pumpOff()
        elif (request.state == 1):
            response.success = self.pumpOn()
        else:
            # not allowed value for pump control
            self.get_logger().info('Incoming request\nstate: %d is invalid' % (request.state))
            response.success = False
        return response
    
    def publish_status(self):
        status = False
        # iterate over pump intervals 
        for interval in self.params.on_intervals:
            status = self.inTimeInterval(interval[0], interval[1])
            if (status):
                break

        if(status):
            # check if we are already in pumping state
            if(not (self.status == status)):
                self.status = status
                self.pumpOn()
        else:
            if(not (self.status == status)):
                self.status = status
                self.pumpOff()

        # publish status (in case some other node is interested)
        msg = Bool()
        msg.data = self.status
        self.status_publisher.publish(msg)

    #     ____ ____ ___ ___     ____            _             _     
    #    / ___|  _ \_ _/ _ \   / ___|___  _ __ | |_ _ __ ___ | |___ 
    #   | |  _| |_) | | | | | | |   / _ \| '_ \| __| '__/ _ \| / __|
    #   | |_| |  __/| | |_| | | |__| (_) | | | | |_| | | (_) | \__ \
    #    \____|_|  |___\___/   \____\___/|_| |_|\__|_|  \___/|_|___/
    def init_gpio_headers(self):
        '''
        open all the gpio headers that need to be controlled by this node.
        Should be called in the node init phase (the constructor).
        Make sure you already have the ROS params loaded.
        '''
        # open the gpio chip and set the pump pin as output
        self.header_open = lgpio.gpiochip_open(0)
        lgpio.gpio_claim_output(self.header_open, self.params.gpio)

    def pumpOn(self) -> bool:
        '''
        Turn on the pump (define the GPIO header of the pump in the 
        config file)
        '''
        # Turn the GPIO pin on
        lgpio.gpio_write(self.header_open, self.params.gpio, 1)
        self.get_logger().info('Turn pump on')
        self.status = True
        return True

    def pumpOff(self) -> bool:
        '''
        Turn off the pump (define the GPIO header of the pump in the 
        config file)
        '''
        # Turn the GPIO pin off
        lgpio.gpio_write(self.header_open, self.params.gpio, 0)
        self.get_logger().info('Turn pump off')
        self.status = False
        return True
 
    #    _   _ _   _ _ _ _           _____                 _   _                  
    #   | | | | |_(_) (_) |_ _   _  |  ___|   _ _ __   ___| |_(_) ___  _ __  ___  
    #   | | | | __| | | | __| | | | | |_ | | | | '_ \ / __| __| |/ _ \| '_ \/ __| 
    #   | |_| | |_| | | | |_| |_| | |  _|| |_| | | | | (__| |_| | (_) | | | \__ \ 
    #    \___/ \__|_|_|_|\__|\__, | |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/ 
    #                        |___/                                                
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

#    __  __       _       
#   |  \/  | __ _(_)_ __  
#   | |\/| |/ _` | | '_ \ 
#   | |  | | (_| | | | | |
#   |_|  |_|\__,_|_|_| |_|
def main(args=None):
    rclpy.init(args=args)
    # Start the service
    pump_control = PumpController()
    rclpy.spin(pump_control)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
