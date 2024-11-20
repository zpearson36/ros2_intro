import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class Speaker(Node):
    def __init__(self):
        super().__init__('speaker_py')
        self.publisher = self.create_publisher(
                String,
                'topic',
                10
                )
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = String()
        msg.data = 'Hello, my name is D439H842'
        self.publisher.publish(msg)
        self.get_logger().info('Speaking: "%s"' % msg.data)

def main(args=None):
    rclpy.init(args=args)
    speaker = Speaker()
    rclpy.spin(speaker)
    rclpy.shutdown()
    speaker.destroy_node()


if __name__ == '__main__':
    main()
