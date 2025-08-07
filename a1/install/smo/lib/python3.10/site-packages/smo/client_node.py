import rclpy
from rclpy.node import Node
from serviceinterface.srv import Getk
from std_msgs.msg import Float32
import sys

class ClientNode(Node):
    def __init__(self):
        super().__init__('client_node')
        self.client = self.create_client(Getk, 'getk')
        self.reqc = Getk.Request()
        self.respc=Getk.Response()
    
    def send_request(self,l):
        self.reqc.k = l
        self.future = self.client.call_async(self.reqc)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
    
def main(args=None):
    rclpy.init(args=args)
    client_node = ClientNode()
    s=client_node.send_request(float(sys.argv[1]))
    client_node.get_logger().info('k= "%f"' % s.t)
    client_node.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()

   