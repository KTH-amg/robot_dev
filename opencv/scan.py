import sys
import numpy as np
import cv2

def drawROI(img, corners):
    cpy = img.copy()

    c1 = (192, 192, 255)
    c2 = (128, 128, 255)

    for pt in corners:
        cv2.circle(cpy, tuple(map(int, pt)), 25, c1, -1, cv2.LINE_AA)

    cv2.line(cpy, tuple(map(int,corners[0])), tuple(map(int,corners[1])), c2, 2, cv2.LINE_AA)
    cv2.line(cpy, tuple(map(int,corners[1])), tuple(map(int,corners[2])), c2, 2, cv2.LINE_AA)
    cv2.line(cpy, tuple(map(int,corners[2])), tuple(map(int,corners[3])), c2, 2, cv2.LINE_AA)
    cv2.line(cpy, tuple(map(int,corners[3])), tuple(map(int,corners[0])), c2, 2, cv2.LINE_AA)

    disp = cv2.addWeighted(img, 0.3, cpy, 0.7, 0)

    return disp

def onMouse(event, x, y, flags, params):
    global srcQuad, dragSrc, ptOld, src

    if event == cv2.EVENT_LBUTTONDOWN:
        for i in range(4):
            if cv2.norm(srcQuad[i] - (x, y)) < 25:
                dragSrc[i] = True
                ptOld = (x, y)
                break

    if event == cv2.EVENT_LBUTTONUP:
        for i in range(4):
            dragSrc[i] = False

    if event == cv2.EVENT_MOUSEMOVE:
        for i in range(4):
            if dragSrc[i]:
                dx = x - ptOld[0]
                dy = y - ptOld[1]

                srcQuad[i] += (dx, dy)

                cpy = drawROI(src, srcQuad)
                cv2.imshow('img', cpy)
                ptOld = (x, y)
                break

src = cv2.imread('./data/scanned.jpeg')

if src is None:
    print('Image open failed!')
    sys.exit()

h, w = src.shape[:2]
dw = 500
dh = round(dw * 297 / 210)

srcQuad = np.array([[30, 30], [30, h-30], [w-30, h-30], [w-30, 30]], np.float32)
dstQuad = np.array([[0, 0], [0, dh-1], [dw-1, dh-1], [dw-1, 0]], np.float32)
dragSrc = [False, False, False, False]

disp = drawROI(src, srcQuad)

cv2.imshow('img', disp)
cv2.setMouseCallback('img', onMouse)

while True:
    key = cv2.waitKey()
    if key == 13:
        break
    elif key == 27:
        cv2.destroyWindow('img')
        sys.exit()

pers = cv2.getPerspectiveTransform(srcQuad, dstQuad)
dst = cv2.warpPerspective(src, pers, (dw, dh), flags=cv2.INTER_CUBIC)

cv2.imshow('dst', dst)

while True:
    if cv2.waitKey() == 27:
        break

cv2.destroyAllWindows()