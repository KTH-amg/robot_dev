import cv2

cap = cv2.VideoCapture("/dev/video0")

if not cap.isOpened():
    raise RuntimeError("ERROR! Unable to open camera")

try:
    width = int(cap.get(cv2.CAP_PROP_FRAME_WIDTH))
    height = int(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
    print(f'width = {width}, height = {height}')

    fourcc = cv2.VideoWriter_fourcc(*'DIVX')
    out = cv2.VideoWriter('./data/goleft_2.avi', fourcc, 20,
                          (width, height), isColor=True)

    while True:
        ret, frame = cap.read()

        #gray = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        cv2.imshow('frame', frame)

        out.write(frame)

        if cv2.waitKey(1) == 27:
            break

finally:
    cap.release()
    cv2.destroyAllWindows()