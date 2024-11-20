import rclpy
from rclpy.node import Node
from base_interfaces.msg import Student

class Listener(Node):
    def __init__(self):
        super().__init__('listener_py')
        self.subscription = self.create_subscription(
                Student,
                'topic',
                self.listener_callback,
                10
                )
        self.subscription

    def listener_callback(self,  stu):
        self.get_logger().info('Receiving Student: name=%s, age=%d, index=%s, height=%d' % (stu.name, stu.age, stu.index, stu.height))

def main(args=None):
    rclpy.init(args=args)
    listener = Listener()
    rclpy.spin(listener)
    rclpy.shutdown()
    listener.destroy_node()


if __name__ == '__main__':
    main()
