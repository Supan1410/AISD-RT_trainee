import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from geometry_msgs.msg import Vector3

class ImuData(Node):
    def __init__(self):
        super().__init__('imu_data')
        self.subscription = self.create_subscription(
            Imu,
            'imu_plugin/out',
            self.listener_callback,
            10)
        self.subscription
        self.pubv= self.create_publisher(Vector3, 'imu/velocity', 10)
        self.pubx= self.create_publisher(Vector3, 'imu/position', 10)
        
        self.msgv=Vector3()
        self.msgx=Vector3()

    

    

    def listener_callback(self, msg):
        dt=1e-9
        self.msgv.x=msg.linear_acceleration.x*dt
        self.msgv.y=msg.linear_acceleration.y*dt
        self.msgv.z=msg.linear_acceleration.z*dt
        
        self.msgx.x=msg.angular_velocity.x*dt
        self.msgx.y=msg.angular_velocity.y*dt
        self.msgx.z=msg.angular_velocity.z*dt

        self.pubv.publish(self.msgv)
        self.pubx.publish(self.msgx)
    
def main(args=None):
    rclpy.init(args=args)
    imu_data = ImuData()
    rclpy.spin(imu_data)
    imu_data.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

    
        
