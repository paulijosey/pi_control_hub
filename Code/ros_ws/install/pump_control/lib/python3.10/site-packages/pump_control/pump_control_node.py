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
# common libs
import time
import lgpio

from pi_hub_srvs.srv import Control     # check service definition in pi_hub_srvs

# lets create a class for the pump controler
class PumpController(Node):
    #     ____                _                   _             
    #    / ___|___  _ __  ___| |_ _ __ _   _  ___| |_ ___  _ __ 
    #   | |   / _ \| '_ \/ __| __| '__| | | |/ __| __/ _ \| '__|
    #   | |__| (_) | | | \__ \ |_| |  | |_| | (__| || (_) | |   
    #    \____\___/|_| |_|___/\__|_|   \__,_|\___|\__\___/|_|   
    def __init__(self):
        super().__init__('pump_control_node')
        
        # get ROS params
        self.init_ros_parameters()
        # open gpio headers
        self.init_gpio_headers()
        # initialize services
        self.init_services()
 
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
        # decalre ROS parameters
        self.declare_parameter('gpio', 15)

        # set the parameters to values
        self.gpio = self.get_parameter('gpio').get_parameter_value().integer_value

        # log output of params we are using
        self.get_logger().info("gpio: %s," %
                                (str(self.gpio)))

    def init_services(self):
        '''
        initialize all service handled by this node.
        '''
        # init service that uses:
        #       "Control" service type,
        #       "pump_control" service name (thats the one we will use on ROS to call it)
        #       and call function "control_callback()"
        self.srv = self.create_service(Control, 'pump_control', self.control_callback)

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
        # TODO
        self.get_logger().warn("publish_status has not yet been implemented!")

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
        lgpio.gpio_claim_output(self.header_open, self.gpio)

    def pumpOn(self) -> bool:
        '''
        Turn on the pump (define the GPIO header of the pump in the 
        config file)
        '''
        # Turn the GPIO pin on
        lgpio.gpio_write(self.header_open, self.gpio, 1)
        self.get_logger().info('Turn pump on')
        return True

    def pumpOff(self) -> bool:
        '''
        Turn off the pump (define the GPIO header of the pump in the 
        config file)
        '''
        # Turn the GPIO pin off
        lgpio.gpio_write(self.header_open, self.gpio, 0)
        self.get_logger().info('Turn pump off')
        return True


def main(args=None):
    rclpy.init(args=args)
    # Start the service
    pump_control_service = PumpController()
    rclpy.spin(pump_control_service)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
