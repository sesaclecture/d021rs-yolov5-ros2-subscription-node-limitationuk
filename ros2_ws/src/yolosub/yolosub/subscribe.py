#!/usr/bin/env python3 # shebang 스크립트를 실행할 인터프리터를 알려주는 역학
import rclpy # ROS 2의 핵심 Python 라이브러리. 노드를 초기화하고 실행하는 함수
from rclpy.node import Node #모든 ROS 2 노드는 이 Node 클래스를 상속
from vision_msgs.msg import Detection2DArray # 구독할 메시지의 타입을 가져오는 라이브러리


class Subscriber(Node): # Node 클래스를 상속받는 Subscriber 클래스
    def __init__(self): # Subscriber 클래스의 생성자
        # super()는 부모 클래스인 Node의 생성자를 호출
        super().__init__('subscribe') #Node의 이름을 subscribe로 지정

        # /yolo_result 토픽을 구독하는 서브스크라이버를 생성합니다.
        self.create_subscription( # 특정 토픽으로부터 메시지를 받기 위한 서브스크라이버를 설정
            Detection2DArray, # 구독할 메시지의 타입
            '/yolo_result', # 토픽
            self.listener_callback, #메시지가 수신되었을 때 호출될 함수
            10) # 큐 사이즈(queue size) 

    def listener_callback(self, msg):
        """
        /yolo_result 토픽에서 메시지를 수신했을 때 실행되는 콜백 함수
        """
        for detection in msg.detections:
            # 감지 결과가 없는 경우 다음 항목으로 넘어갑니다.
            if not detection.results:
                self.get_logger().warn('Empty results in a detection object.')
                continue

            # 첫 번째 감지 결과의 클래스와 신뢰도를 가져옵니다.
            hypothesis = detection.results[0].hypothesis
            class_id = hypothesis.class_id
            score = hypothesis.score

            self.get_logger().info(f'Detected: class={class_id}, score={score:.2f}')


def main(args=None):
    rclpy.init(args=args)
    node = Subscriber()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()