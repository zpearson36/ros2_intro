import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from base_interfaces.action import Progress

class AClient(Node):

    def __init__(self):
        super().__init__('action_client')
        self._action_client = ActionClient(
                self,
                Progress,
                'get_complete'
                )

    def send_goal(self, num):
        goal_msg = Progress.Goal()
        goal_msg.target = num
        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback =  self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return
        self.get_logger().info('Goal Accepted')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: %s' % result.complete)
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback.current
        self.get_logger().info('Current progress: %d%%' % feedback)

def main(args=None):
    rclpy.init(args=args)
    a_client = AClient()
    a_client.send_goal(439)
    rclpy.spin(a_client)

if __name__ == '__main__':
    main()
