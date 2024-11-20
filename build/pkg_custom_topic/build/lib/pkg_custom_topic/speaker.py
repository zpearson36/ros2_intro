import rclpy
from rclpy.node import Node
from base_interfaces.msg import Student

class Speaker(Node):
    def __init__(self):
        super().__init__('speaker_py')
        self.publisher = self.create_publisher(
                Student,
                'topic',
                10
                )
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        stu = Student()
        stu.name = "Student D439H842"
        stu.age  =  439
        stu.index = "DH"
        stu.height = 842
        self.publisher.publish(stu)
        self.get_logger().info('Sending Student: name=%s, age=%d, index=%s, height=%d' % (stu.name, stu.age, stu.index, stu.height))
        self.i += 1

def main(args=None):
    rclpy.init(args=args)
    speaker = Speaker()
    rclpy.spin(speaker)
    rclpy.shutdown()
    speaker.destroy_node()


if __name__ == '__main__':
    main()
