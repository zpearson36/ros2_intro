import rclpy
import time
from rclpy.action import ActionServer
from rclpy.node import Node
from base_interfaces.action import Progress

class AServer(Node):
    def __init__(self):
        super().__init__('action_server')
        self._action_server = ActionServer(
                self,
                Progress,
                'get_complete',
                self.execute_callback)
        self.get_logger().info('Action server is ready to receive requests')

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        feedback_msg = Progress.Feedback()
        total = 0
        for i in range(1, goal_handle.request.target + 1):
            total += 1
            progress = (i / goal_handle.request.target) * 100
            feedback_msg.current = int(progress)
            self.get_logger().info('Continuous Feedback: %.2f' % progress)
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)

        goal_handle.succeed()
        result = Progress.Result()
        result.complete = str(total)
        self.get_logger().info('Done')

        return result

def main(args=None):
    rclpy.init(args=args)
    a_server = AServer()
    rclpy.spin(a_server)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
