# ROS libs
import rclpy
from rclpy.node import Node
# SRV definitions
from pi_hub_srvs.srv import Control     # check service definition in pi_hub_srvs
# MSG definitions
# TODO
# common libs
import time

# lets create a class for the pump controler
class PiHub(Node):

    def __init__(self):
        super().__init__('pi_hub')

        # declare all params here
        # param name, default value
        self.declare_parameters(
            namespace='',
            parameters=[
                ('gpio_pump', 15),
                ('gpio_led', 18)
            ]
        )

def main(args=None):
    rclpy.init(args=args)
    # Start the service
    pi_hub = PiHub()
    rclpy.spin(pi_hub)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
