import sys
from PyQt6.QtWidgets import *
from PyQt6.QtGui import *
from PyQt6 import uic

from_class = uic.loadUiType("Test.ui")[0]

class WindowClass(QMainWindow, from_class):
    def __init__(self):
        super().__init__()
        self.setupUi(self)

        self.setWindowTitle("Du Du Du Du Max Verstappen")
        
        self.pushButton_1.clicked.connect(self.button1_Clicked)
        self.pushButton_2.clicked.connect(self.button2_Clicked)

        self.radio_1.clicked.connect(self.radio_Clicked)
        self.radio_2.clicked.connect(self.radio_Clicked)
        self.radio_3.clicked.connect(self.radio_Clicked)

        self.check_1_input.clicked.connect(self.check1_Clicked)
        self.check_2_input.clicked.connect(self.check2_Clicked)
        self.check_3_input.clicked.connect(self.check3_Clicked)
        self.check_4_input.clicked.connect(self.check4_Clicked)

        self.check_1_out.setCheckable(False)
        self.check_2_out.setCheckable(False)
        self.check_3_out.setCheckable(False)
        self.check_4_out.setCheckable(False)

    def button1_Clicked(self):
        self.textEdit.setText("Button 1")
        #self.radio_1.setChecked(True)

    def button2_Clicked(self):
        self.textEdit.setText("Button 2")
        #self.radio_1.setChecked(True)

    def radio_Clicked(self):
        if self.radio_1.isChecked():
            self.textEdit.setText("Radio 1")
        elif self.radio_2.isChecked():
            self.textEdit.setText("Radio 2")
        elif self.radio_3.isChecked():
            self.textEdit.setText("Radio 3")
        else:
            self.textEdit.setText("Unknown")
    
    def check1_Clicked(self):
        if self.check_1_input.isChecked():
            self.textEdit.setText("Checkbox 1 Checked")
            self.check_1_out.setChecked(True)
        else:
            self.textEdit.setText("Checkbox 1 Unchecked")
            self.check_1_out.setChecked(False)

    def check2_Clicked(self):
        if self.check_2_input.isChecked():
            self.textEdit.setText("Checkbox 2 Checked")
            self.check_2_out.setChecked(True)
        else:
            self.textEdit.setText("Checkbox 2 Unchecked")
            self.check_2_out.setChecked(False)

    def check3_Clicked(self):
        if self.check_3_input.isChecked():
            self.textEdit.setText("Checkbox 3 Checked")
            self.check_3_out.setChecked(True)
        else:
            self.textEdit.setText("Checkbox 3 Unchecked")
            self.check_3_out.setChecked(False)

    def check4_Clicked(self):
        if self.check_4_input.isChecked():
            self.textEdit.setText("Checkbox 4 Checked")
            self.check_4_out.setChecked(True)
        else:
            self.textEdit.setText("Checkbox 4 Unchecked")
            self.check_4_out.setChecked(False)
    
if __name__ == "__main__":
    app = QApplication(sys.argv)
    myWindows = WindowClass()
    myWindows.show()

    sys.exit(app.exec())