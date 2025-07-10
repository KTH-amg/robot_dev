import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
import tensorflow as tf
import os
from ament_index_python.packages import get_package_share_directory

class MNISTClassifier(Node):
    def __init__(self):
        super().__init__('mnist_classifier')
        self.subscription = self.create_subscription(
            Image,
            '/image_raw',
            self.listener_callback,
            10)
        self.bridge = CvBridge()

        # TFLite 모델 로드
        model_path = os.path.join(
            get_package_share_directory('my_opencv_tutorials'),
            'cnn_model.tflite'
        )
        #model_path = os.path.abspath(model_path)
        self.interpreter = tf.lite.Interpreter(model_path=model_path)
        self.interpreter.allocate_tensors()
        self.input_details = self.interpreter.get_input_details()
        self.output_details = self.interpreter.get_output_details()

        self.get_logger().info('MNIST TFLite 모델 로드 완료')

    def listener_callback(self, msg):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

            # 관심 영역 설정
            x, y, w, h = 160, 120, 80, 80
            roi = cv_image[y:y+h, x:x+w]

            # 전처리: 흑백 변환, 리사이즈, 정규화
            gray = cv2.cvtColor(roi, cv2.COLOR_BGR2GRAY)
            resized = cv2.resize(gray, (28, 28), interpolation=cv2.INTER_AREA)
            input_data = resized.astype(np.float32) / 255.0
            input_data = np.expand_dims(input_data, axis=(0, -1))  # (1, 28, 28, 1)

            # 추론
            self.interpreter.set_tensor(self.input_details[0]['index'], input_data)
            self.interpreter.invoke()
            output = self.interpreter.get_tensor(self.output_details[0]['index'])
            predicted_digit = int(np.argmax(output))

            # 콘솔 출력
            self.get_logger().info(f'Digit : {predicted_digit}')

            # 결과 시각화
            cv2.rectangle(cv_image, (x, y), (x + w, y + h), (0, 255, 0), 2)
            cv2.putText(cv_image, f'Digit: {predicted_digit}', (x, y - 10),
                        cv2.FONT_HERSHEY_SIMPLEX, 1.0, (0, 0, 255), 2)
            cv2.imshow("Digit Recognition", cv_image)
            cv2.waitKey(1)

        except Exception as e:
            self.get_logger().error(f'오류 발생: {e}')


def main(args=None):
    rclpy.init(args=args)
    node = MNISTClassifier()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
    cv2.destroyAllWindows()
