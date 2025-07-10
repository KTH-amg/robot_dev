import numpy as np

# Lane Distance
def estimate_lane_distance(mask: np.ndarray, scale_factor: float) -> float | None:
    STOP_LINE_CLASS_ID = 4
    mask = np.atleast_1d(mask)

    # 정지선 위치 추출
    stopline_ys, stopline_xs = np.where(mask == STOP_LINE_CLASS_ID)
    if stopline_ys.size == 0:
        return None

    # 각 y별로 픽셀 개수 카운트
    y_vals, counts = np.unique(stopline_ys, return_counts=True)

    # 너무 작은 라벨링 제거 (ex: 10픽셀 미만)
    valid_y = y_vals[counts > 10]
    if valid_y.size == 0:
        return None

    # 가장 아래쪽의 '신뢰할 수 있는' 정지선
    y_max = np.max(valid_y)
    frame_height = mask.shape[0]
    pixel_distance = frame_height - y_max

    return pixel_distance * scale_factor



# Object Distance
# 2. 클래스별 색상 및 실제 크기 정의
CLASS_COLORS = {
    "car": (0, 255, 0),
    "child_protection": (255, 255, 0),
    "construction": (255, 0, 0),
    "person": (0, 0, 255),
    "speed_limit_30": (0, 165, 255),
    "speed_limit_50": (128, 0, 128),
    "stop_sign": (0, 255, 255),
    "veh_go": (255, 0, 255),
    "veh_goLeft": (102, 0, 204),
    "veh_stop": (0, 128, 255),
    "veh_warning": (255, 128, 0),
}
REAL_DIMENSIONS = {
    "car": {"w": 1.8, "h": 1.5},
    "child_protection": {"w": 0.6, "h": 0.6},
    "construction": {"w": 0.3, "h": 0.7},
    "person": {"w": 0.5, "h": 1.7},
    "speed_limit_30": {"w": 0.6, "h": 0.6},
    "speed_limit_50": {"w": 0.6, "h": 0.6},
    "stop_sign": {"w": 0.7, "h": 0.7},
    "veh_go": {"w": 0.5, "h": 0.5},
    "veh_goLeft": {"w": 0.5, "h": 0.5},
    "veh_stop": {"w": 0.5, "h": 0.5},
    "veh_warning": {"w": 0.5, "h": 0.5},
}
FOCAL_LENGTH = 1250  # 조정 가능

# def estimate_obj_distance(obj_class, box):
#     # print(box)

#     x1 = box[0]
#     y1 = box[1]
#     x2 = box[2]
#     y2 = box[3]

#     box_w = abs(x2 - x1)
#     box_h = abs(y2 - y1)
#     if obj_class not in REAL_DIMENSIONS:
#         return None
#     real = REAL_DIMENSIONS[obj_class]
#     use_width = obj_class in {
#         "car", "child_protection", "speed_limit_30",
#         "speed_limit_50", "stop_sign", "veh_go",
#         "veh_goLeft", "veh_stop", "veh_warning"
#     }
#     if use_width and box_w > 0:
#         return (real["w"] * FOCAL_LENGTH) / box_w
#     elif box_h > 0:
#         return (real["h"] * FOCAL_LENGTH) / box_h
#     return None


def estimate_obj_distance(obj_class: str, box: tuple[int, int, int, int], image_height: int = 256) -> float | None:
    """
    Bounding box로부터 객체의 거리를 추정 (유사삼각형 원리 + 높이 기준 보정)
    Args:
        obj_class (str): 객체 클래스 이름
        box (tuple): (x1, y1, x2, y2) → bounding box 좌표
        image_height (int): 입력 이미지 높이 (기본 256)
    Returns:
        float | None: 거리 (m)
    """
    x1 = box[0]
    y1 = box[1]
    x2 = box[2]
    y2 = box[3]
    box_w = abs(x2 - x1)
    box_h = abs(y2 - y1)

    if obj_class not in REAL_DIMENSIONS:
        return None
    
    real = REAL_DIMENSIONS[obj_class]
    use_width = obj_class in {
        "car", "child_protection", "speed_limit_30",
        "speed_limit_50", "stop_sign", "veh_go",
        "veh_goLeft", "veh_stop", "veh_warning"
    }

    if use_width and box_w > 0:
        distance = (real["w"] * FOCAL_LENGTH) / box_w
    elif box_h > 0:
        distance = (real["h"] * FOCAL_LENGTH) / box_h
    else:
        return None

    # 🔧 보정: 화면 상 위치에 따라 가까움/멀어짐 조절
    center_y = (y1 + y2) / 2
    position_factor = 1 + (1 - center_y / image_height)
    return distance / position_factor  # 가까울수록 거리 감소
