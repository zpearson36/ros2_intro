import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class Listener(Node):
    def __init__(self):
        super().__init__('listener_py')
        self.subscription = self.create_subscription(
                String,
                'topic',
                self.listener_callback,
                10
                )
        self.subscription

    def listener_callback(self,  msg):
        self.get_logger().info('Heard Chef: "%s"' % msg.data)

def main(args=None):
    rclpy.init(args=args)
    listener = Listener()
    rclpy.spin(listener)
    rclpy.shutdown()
    listener.destroy_node()


if __name__ == '__main__':
    main()
