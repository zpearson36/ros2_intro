import rclpy
from rclpy.node import Node
from base_interfaces.srv import Student

class Server(Node):
    def __init__(self):
        super().__init__('server')
        self.service = self.create_service(
                Student,
                'StudentInfo',
                self.server_callback,
                )
        self.get_logger().info("Server is ready to receive requet...")

    def server_callback(self, request, response):
        response.name = request.id
        splt = list(request.id)
        response.age  = int(''.join(splt[1:4]))
        response.index = ''.join([splt[0], splt[4]])
        response.height = int(''.join(splt[5:]))
        response.ratio = response.age / response.height
        self.get_logger().info('Incoming Request: ID=%s' % request.id)
        return response

def main(args=None):
    rclpy.init(args=args)
    server = Server()
    rclpy.spin(server)
    rclpy.shutdown()
    server.destroy_node()


if __name__ == '__main__':
    main()
