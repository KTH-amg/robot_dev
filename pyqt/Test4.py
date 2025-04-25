import sys
from PyQt6.QtWidgets import *
from PyQt6.QtGui import *
from PyQt6 import uic

from_class = uic.loadUiType("Test4.ui")[0]

class WindowClass(QMainWindow, from_class):
    def __init__(self):
        super().__init__()
        self.setupUi(self)

        self.setWindowTitle("Rhythm Heaven")
        self.Add.clicked.connect(self.addText)
        self.FontUbuntu.clicked.connect(lambda: self.setFont("Ubuntu"))
        self.FontNanumGothic.clicked.connect(lambda: self.setFont("NanumGothic"))

        self.Red.clicked.connect(lambda: self.setTextColor(255, 0, 0))
        self.Green.clicked.connect(lambda: self.setTextColor(0, 255, 0))
        self.Blue.clicked.connect(lambda: self.setTextColor(0, 0, 255))

        self.SetFontSize.clicked.connect(self.setTextSize)
        self.validator = QIntValidator()
        self.FontSize.setValidator(self.validator)

    '''
    def clearText(self):
        self.lineEdit.clear()
        self.textBrowser.clear()
    '''

    def setTextColor(self, r, g, b):
        color = QColor(r, g, b)
        self.Output.selectAll()
        self.Output.setTextColor(color)
        self.Output.moveCursor(QTextCursor.MoveOperation.End)

    def addText(self):
        input = self.Input.toPlainText()
        self.Input.clear()
        self.Output.append(input)

    def setFont(self, fontName):
        font = QFont(fontName, 11)
        self.Output.setFont(font)

    def setTextSize(self):
        if (self.validator.validate(self.FontSize.text(), 0) == "Invalid"):
            self.FontSize.setText("Error!")
        else:
            size = int(self.FontSize.text())
            self.Output.selectAll()
            self.Output.setFontPointSize(size)
            self.Output.moveCursor(QTextCursor.MoveOperation.End)

if __name__ == "__main__":
    app = QApplication(sys.argv)
    myWindows = WindowClass()
    myWindows.show()

    sys.exit(app.exec())