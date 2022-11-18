# ROS libs
import rclpy
from rclpy.node import Node

from  import Bool

# lets create a class for the pump controler
class PumpControler(Node):

    def __init__(self):
        super().__init__('pump_controler')

        self.srv = self.create_service(PumpOn, 'pump_on', self.pumpOn)

        self.subscription = self.create_subscription(
                    Bool,
                    'pump_control',
                    self.pump_control_callback,
                    10)
        self.subscription  # prevent unused variable warning
        self.i = 0

    def pump_control_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)

def main(args=None):
    rclpy.init(args=args)
    node = Node('pump_control_node')
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
