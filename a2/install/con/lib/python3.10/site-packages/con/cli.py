import rclpy
from rclpy.node import Node
from anint.srv import Ang  # Ensure Ang.srv is correctly defined
import sys

class Cli(Node):
    def __init__(self):
        super().__init__('cli')
        self.cli = self.create_client(Ang, 'ang')

        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')

        self.req = Ang.Request()
    
    def send_request(self, ang1, ang2):
        self.req.t1 = ang1
        self.req.t2 = ang2
        return self.cli.call_async(self.req)
    
def main(args=None):
    rclpy.init(args=args)


    ang1 = float(sys.argv[1])
    ang2 = float(sys.argv[2])

    cli = Cli()
    fut = cli.send_request(ang1, ang2)

    rclpy.spin_until_future_complete(cli, fut)

    response = fut.result()
    cli.get_logger().info(f'End-effector position: x = {response.x}, y = {response.y}')
    
    cli.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':  
    main()
