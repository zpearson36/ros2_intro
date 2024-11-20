import rclpy
from rclpy.node import Node
from base_interfaces.srv import Student

class Client(Node):
    def __init__(self):
        super().__init__('client')
        self.cli = self.create_client(
                Student,
                'StudentInfo')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("service not available")
        self.req = Student.Request()

    def send_request(self):
        self.req.id = "D439H842"
        self.future = self.cli.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)
    client = Client()
    client.send_request()
    rclpy.spin_until_future_complete(client, client.future)
    try:
        response = client.future.result()
    except Exception as e:
        client.get_logger().info(
                'Service call Failed %r' %(e,))
    else:
        client.get_logger().info(
                'Result of Student Request: name=%s, index=%s, age=%d, height=%d, ratio=%f' % (response.name,response.index,response.age,response.height,response.ratio,))
    rclpy.shutdown()


if __name__ == '__main__':
    main()
