import sys
from PyQt6.QtWidgets import *
from PyQt6.QtGui import *
from PyQt6 import uic
from PyQt6 import QtGui
from PyQt6.QtCore import *
import urllib.request

from_class = uic.loadUiType("paint.ui")[0]

class WindowClass(QMainWindow, from_class):
    def __init__(self):
        super().__init__()
        self.setupUi(self)
        self.setWindowTitle("Lights Out!")

        self.pixmap = QtGui.QPixmap(self.label.width(), self.label.height())
        self.pixmap.fill(Qt.GlobalColor.white)

        self.label.setPixmap(self.pixmap)
        self.x, self.y = None, None

    def mouseMoveEvent(self, event):
        if self.x is None:
            self.x = event.position().x()
            self.y = event.position().y()
            return
        
        canvas = self.label.pixmap()
        painter = QtGui.QPainter(canvas)
        painter.drawLine(
            int(self.x-self.label.x()), int(self.y-self.label.y()), 
            int(event.position().x()-self.label.x()), 
            int(event.position().y()-self.label.y()))
        '''
        painter.drawPoint(int(self.x-self.label.x()), int(self.y-self.label.y()))
        painter.drawPoint(int(event.position().x()-self.label.x()), 
                          int(event.position().y()-self.label.y()))
        '''
        painter.end()
        self.label.setPixmap(canvas)
        self.update()

        self.x = event.position().x()
        self.y = event.position().y()

    def mouseReleaseEvent(self, event):
        self.x = None
        self.y = None

    '''
    def draw(self):
        canvas = self.label.pixmap()
        painter = QtGui.QPainter(canvas)
        painter.setPen(QPen(Qt.GlobalColor.blue, 5, Qt.PenStyle.SolidLine))
        
        self.pen = QPen(Qt.GlobalColor.red, 5, Qt.PenStyle.SolidLine)
        painter.setPen(self.pen)
        painter.drawLine(100, 100, 500, 100)

        self.pen.setBrush(Qt.GlobalColor.blue)
        self.pen.setWidth(10)
        self.pen.setStyle(Qt.PenStyle.DashDotLine)
        painter.setPen(self.pen)
        self.line = QLine(100, 200, 500, 200)
        painter.drawLine(self.line)

        painter.setPen(QPen(Qt.GlobalColor.black, 20, Qt.PenStyle.DotLine))
        self.p1 = QPoint(100, 300)
        self.p2 = QPoint(500, 300)
        painter.drawLine(self.p1, self.p2)
        
        self.font = QFont()
        self.font.setFamily('Times')
        self.font.setBold(True)
        self.font.setPointSize(20)
        painter.setFont(self.font)

        painter.drawText(100, 100, "No Michael No!")
        painter.end()
        self.label.setPixmap(canvas)
    '''

if __name__ == "__main__":
    app = QApplication(sys.argv)
    myWindows = WindowClass()
    myWindows.show()

    sys.exit(app.exec())