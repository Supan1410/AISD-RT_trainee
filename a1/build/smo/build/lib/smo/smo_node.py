import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

from serviceinterface.srv import Getk


class SmoNode(Node):
    def __init__(self):
        super().__init__('smo_node')
        self.publisher_ = self.create_publisher(Float32, 'smo2marker', 10)
        self.publisher2 = self.create_publisher(Float32,'TE',10)
        self.publisher3 = self.create_publisher(Float32,'KE',10)
        self.publisher4 = self.create_publisher(Float32,'PE',10)
        self.ser=self.create_service(Getk,'getk',self.change_k)


        self.t=0
        self.dt=0.0001
        self.timer=self.create_timer(self.dt,self.smocalc)
        self.x=10
        self.v=0
        self.m=0.5
        self.k=0.1
        self.b=0.001
        self.Fs= -self.k*self.x
        self.Fd= -self.b*self.v
        self.F= self.Fs + self.Fd
        self.a=self.F/self.m
        self.pe=self.k*pow(self.x,2)*0.5
        self.ke=self.m*pow(self.v,2)*0.5
        self.te=self.pe+self.ke
    def change_k(self,req,res):
        self.b=req.k
        res.t=self.k
        return res



    def smocalc(self):
        msg=Float32()
        p=Float32()
        k=Float32()
        t=Float32()

        self.Fs= -self.k*self.x
        self.Fd= -self.b*self.v
        self.F= self.Fs + self.Fd
        self.a=self.F/self.m
        self.v=self.v + self.a*self.dt
        self.x=self.x + self.v*self.dt 
        self.v=self.v + self.a*self.dt
        self.pe=self.k*pow(self.x,2)*0.5
        self.ke=self.m*pow(self.v,2)*0.5
        self.te=self.pe+self.ke 
        
        msg.data=self.x
        p.data=self.pe
        k.data=self.ke
        t.data=self.te

        self.publisher_.publish(msg)
        self.publisher2.publish(t)
        self.publisher3.publish(k)
        self.publisher4.publish(p)
        self.get_logger().info('Current x= "%f"' % msg.data)

def main(args=None):
    rclpy.init(args=args)
    smo_node = SmoNode()
    rclpy.spin(smo_node)
    smo_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
        
        



        

        