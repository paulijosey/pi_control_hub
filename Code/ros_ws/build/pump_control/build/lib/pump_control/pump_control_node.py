# ROS libs
import rclpy
from rclpy.node import Node
# common libs
import time
import lgpio

# TODO: read this from config
PUMP_HEADER = 15

from pi_hub_srvs.srv import Control     # check service definition in pi_hub_srvs

# lets create a class for the pump controler
class PumpController(Node):

    def __init__(self, header_open_):
        super().__init__('pump_controller')
        self.header_open = header_open_
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

    def pumpOn(self) -> bool:
        '''
        Turn on the pump (define the GPIO header of the pump in the 
        config file)
        '''
        # TODO
        # Turn the GPIO pin on
        lgpio.gpio_write(self.header_open, PUMP_HEADER, 1)
        self.get_logger().info('Turn pump on')
        return True

    def pumpOff(self) -> bool:
        '''
        Turn off the pump (define the GPIO header of the pump in the 
        config file)
        '''
        # TODO
        # Turn the GPIO pin off
        lgpio.gpio_write(self.header_open, PUMP_HEADER, 0)
        self.get_logger().info('Turn pump off')
        return True



def main(args=None):
    rclpy.init(args=args)
    # open the gpio chip and set the LED pin as output
    header_open = lgpio.gpiochip_open(0)
    lgpio.gpio_claim_output(header_open, PUMP_HEADER)
    # Start the service
    pump_control_service = PumpController(header_open)
    rclpy.spin(pump_control_service)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
