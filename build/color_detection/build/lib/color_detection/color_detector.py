import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
from cv_bridge import CvBridge
import cv2
import numpy as np

class ColorDetector(Node):
    def __init__(self):
        super().__init__('color_detector')
        self.bridge = CvBridge()
        self.image_sub = self.create_subscription(
            Image,
            '/world/world_demo/model/tugbot/link/camera_front/sensor/color/image',
            self.image_callback,
            10
        )
        self.cmd_vel_pub = self.create_publisher(Twist, '/model/tugbot/cmd_vel', 10)
        self.last_color = None
        self.move_duration = 30  # Number of frames to keep moving
        self.move_counter = 0

    def image_callback(self, msg):
        frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
        frame = cv2.resize(frame, (320, 240))
        hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

        # Define HSV ranges
        red_mask = cv2.inRange(hsv, (0, 120, 70), (10, 255, 255))
        green_mask = cv2.inRange(hsv, (36, 50, 70), (89, 255, 255))
        blue_mask = cv2.inRange(hsv, (90, 50, 70), (128, 255, 255))

        red_count = np.sum(red_mask)
        green_count = np.sum(green_mask)
        blue_count = np.sum(blue_mask)

        max_color = max(red_count, green_count, blue_count)
        detected = None

        if max_color < 1000:
            self.get_logger().info("No dominant color detected.")
        elif max_color == red_count:
            detected = "RED"
        elif max_color == green_count:
            detected = "GREEN"
        else:
            detected = "BLUE"

        if detected and detected != self.last_color:
            self.get_logger().info(f"Detected: {detected}")
            self.last_color = detected
            self.move_counter = self.move_duration

        # Move toward color
        if self.move_counter > 0:
            twist = Twist()
            if self.last_color == "RED":
                twist.linear.x = 0.5  # forward
                twist.angular.z = 0.0
            elif self.last_color == "GREEN":
                twist.linear.x = 0.0
                twist.angular.z = 0.5  # turn left
            elif self.last_color == "BLUE":
                twist.linear.x = 0.0
                twist.angular.z = -0.5  # turn right
            self.cmd_vel_pub.publish(twist)
            self.move_counter -= 1
        else:
            self.cmd_vel_pub.publish(Twist())  # stop

def main(args=None):
    rclpy.init(args=args)
    node = ColorDetector()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
