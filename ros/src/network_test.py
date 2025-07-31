import subprocess
import re

def get_signal_level(interface="wlo1"):
    try:
        # iwconfig 실행
        result = subprocess.run(["iwconfig", interface], capture_output=True, text=True)
        
        if result.returncode != 0:
            print("인터페이스를 찾을 수 없습니다.")
            return None

        # Signal level 추출 (예: "Signal level=-45 dBm")
        match = re.search(r"Signal level[=\:]\s*(-?\d+)\s*dBm", result.stdout)
        if match:
            return int(match.group(1))
        else:
            print("Signal level 정보를 찾을 수 없습니다.")
            return None

    except Exception as e:
        print(f"에러 발생: {e}")
        return None


if __name__ == "__main__":
    signal = get_signal_level("wlo1")
    if signal is None:
        signal = -100
    print(f"Signal level: {signal} dBm")