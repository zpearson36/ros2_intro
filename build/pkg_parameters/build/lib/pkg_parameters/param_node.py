import rclpy
from rclpy.node import Node

class ParamNode(Node):
    def __init__(self):
        super().__init__('param_node')

        self.declare_parameter('publish_frequency', 1.0)
        self.declare_parameter('message_content', 'Hello, World')
        self.declare_parameter('repeat_count', 10)

        self.time = self.create_timer(self.get_parameter('publish_frequency').get_parameter_value().double_value,
                                      self.timer_callback)

    def timer_callback(self):
        msg = self.get_parameter('message_content').get_parameter_value().string_value
        reps = self.get_parameter('repeat_count').get_parameter_value().integer_value
        if reps:
            self.get_logger().info('msg parameter: %s' % msg)

            new_reps = rclpy.parameter.Parameter(
                    'repeat_count',
                    rclpy.Parameter.Type.INTEGER,
                    reps - 1
                    )

            self.set_parameters([new_reps])

def main(args=None):
    rclpy.init(args=args)
    p_node = ParamNode()
    rclpy.spin(p_node)
    rclpy.shutdown()
    p_node.destroy_node()

if __name__ == '__main__':
    main()
