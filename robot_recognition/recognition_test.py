import cv2
import threading
import time
import tkinter as tk
import numpy as np
import mediapipe as mp
from ultralytics import YOLO

# Load YOLOv8 model (you can change to yolov8n.pt for faster inference)
model = YOLO('yolo11n.pt')  # make sure model is downloaded

# MediaPipe Hands
mp_hands = mp.solutions.hands
hands = mp_hands.Hands(
    static_image_mode=False,
    max_num_hands=1,
    min_detection_confidence=0.5,
    min_tracking_confidence=0.5
)

# tkinter GUI
root = tk.Tk()
root.title("로봇 디스플레이")
root.geometry("800x200")
label = tk.Label(root, text="", font=("Arial", 48))
label.pack(expand=True)

def show_message(msg, duration=3):
    label.config(text=msg)
    root.after(duration * 1000, lambda: label.config(text=""))

# GUI thread 시작
def run_gui():
    root.mainloop()

threading.Thread(target=run_gui, daemon=True).start()

# 카메라 시작
cap = cv2.VideoCapture(0)

# 상태 관리
state = "IDLE"
last_greet_time = 0
greet_interval = 5  # 최소 인사 간격 (초)

# 손 흔들기 감지를 위한 X 좌표 버퍼
x_buffer = []

def detect_person(frame):
    results = model.predict(source=frame, verbose=False)
    for box in results[0].boxes:
        cls_id = int(box.cls[0])
        if cls_id == 0:  # class 0 = person
            x1, y1, x2, y2 = map(int, box.xyxy[0])
            height = y2 - y1
            if height > 250:  # 가까운 사람으로 간주
                return True
    return False

def detect_waving(frame):
    global x_buffer
    frame_rgb = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
    result = hands.process(frame_rgb)

    if result.multi_hand_landmarks:
        wrist = result.multi_hand_landmarks[0].landmark[mp_hands.HandLandmark.WRIST]
        x_buffer.append(wrist.x)
        if len(x_buffer) > 6:
            x_buffer.pop(0)
            movement = abs(x_buffer[-1] - x_buffer[0])
            if movement > 0.1:
                return True
    return False

# 메인 루프
print("[INFO] 시스템 시작됨. 사람 접근 시 인사합니다.")
while True:
    ret, frame = cap.read()
    if not ret:
        continue

    frame = cv2.flip(frame, 1)
    now = time.time()

    person_nearby = detect_person(frame)
    waving = detect_waving(frame)

    if person_nearby and waving:
        if state != "GREETED" and now - last_greet_time > greet_interval:
            print("[INFO] 인사 트리거: 사람 + 손 흔들기 감지")
            show_message("안녕하세요!")
            last_greet_time = now
            state = "GREETED"
    else:
        state = "IDLE"

    # 디버깅용 (원하면 비활성화 가능)
    cv2.imshow("Camera", frame)
    if cv2.waitKey(1) & 0xFF == 27:
        break

cap.release()
cv2.destroyAllWindows()