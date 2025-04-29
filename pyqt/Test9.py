import sys
from PyQt6.QtWidgets import *
from PyQt6.QtGui import *
from PyQt6 import uic

from_class = uic.loadUiType("Test9.ui")[0]

class WindowClass(QMainWindow, from_class):
    def __init__(self):
        super().__init__()
        self.setupUi(self)

        self.setWindowTitle("간다!")

        min = self.spinBox.minimum()
        max = self.spinBox.maximum()
        step = self.spinBox.singleStep()

        self.pixmap = QPixmap()
        self.pixmap.load('nintendo.jpg')

        self.pixMap.setPixmap(self.pixmap)
        self.pixMap.resize(self.pixmap.width(), self.pixmap.height())

        self.editMin.setText(str(min))
        self.editMax.setText(str(max))
        self.editStep.setText(str(step))

        self.slider.setRange(min, max)
        self.slider.setSingleStep(step)

        self.btnApply.clicked.connect(self.apply)
        self.spinBox.valueChanged.connect(self.change)
        self.slider.valueChanged.connect(self.changeSlider)
        self.btnSave.clicked.connect(self.saveImage)
        self.btnGet.clicked.connect(self.getImage)

        self.pixmap = QPixmap()
        self.pixmap.load('nintendo.jpg')

        self.pixMap.setPixmap(self.pixmap)
        self.pixMap.resize(self.pixmap.width(), self.pixmap.height())

    def apply(self):
        min = self.editMin.text()
        max = self.editMax.text()
        step = self.editStep.text()

        self.spinBox.setRange(int(min), int(max))
        self.spinBox.setSingleStep(int(step))

        self.slider.setRange(int(min), int(max))
        self.slider.setSingleStep(int(step))

    def change(self):
        actualValue = self.spinBox.value()
        self.labelValue.setText(str(actualValue))
        self.slider.setValue(actualValue)

    def changeSlider(self):
        actualValue = self.slider.value()
        self.labelValue2.setText(str(actualValue))
        self.spinBox.setValue(actualValue)

    def saveImage(self):
        name, _ = QFileDialog.getSaveFileName(self, 'Save File', './')
        self.pixmap.save(name)

    def getImage(self):
        name, _ = QFileDialog.getOpenFileName(self, 'Open File', '~/')
        self.pixmap.load(name)

        self.pixMap.setPixmap(self.pixmap)
        self.pixMap.resize(self.pixmap.width(), self.pixmap.height())

if __name__ == "__main__":
    app = QApplication(sys.argv)
    myWindows = WindowClass()
    myWindows.show()

    sys.exit(app.exec())