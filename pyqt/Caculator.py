import sys
from PyQt6.QtWidgets import *
from PyQt6.QtGui import *
from PyQt6 import uic

from_class = uic.loadUiType("Caculator.ui")[0]

class WindowClass(QMainWindow, from_class):
    def __init__(self):
        super().__init__()
        self.setupUi(self)

        self.setWindowTitle("Max Caculator")

        self.btn_input = []
        self.isError = False
        self.btn_0.clicked.connect(lambda: self.btn_num_Clicked('0'))
        self.btn_1.clicked.connect(lambda: self.btn_num_Clicked('1'))
        self.btn_2.clicked.connect(lambda: self.btn_num_Clicked('2'))
        self.btn_3.clicked.connect(lambda: self.btn_num_Clicked('3'))
        self.btn_4.clicked.connect(lambda: self.btn_num_Clicked('4'))
        self.btn_5.clicked.connect(lambda: self.btn_num_Clicked('5'))
        self.btn_6.clicked.connect(lambda: self.btn_num_Clicked('6'))
        self.btn_7.clicked.connect(lambda: self.btn_num_Clicked('7'))
        self.btn_8.clicked.connect(lambda: self.btn_num_Clicked('8'))
        self.btn_9.clicked.connect(lambda: self.btn_num_Clicked('9'))
        self.btn_ac.clicked.connect(self.all_clear)
        self.btn_c.clicked.connect(self.clear)
        self.btn_div.clicked.connect(lambda: self.btn_token_Clicked('/'))
        self.btn_dot.clicked.connect(lambda: self.btn_token_Clicked('.'))
        self.btn_equal.clicked.connect(self.display_result)
        self.btn_minus.clicked.connect(lambda: self.btn_token_Clicked('-'))
        self.btn_multi.clicked.connect(lambda: self.btn_token_Clicked('*'))
        self.btn_plus.clicked.connect(lambda: self.btn_token_Clicked('+'))

    def is_number(self, s):
        try:
            float(s)
            return True
        except ValueError:
            return False

    def get_operator_priority(self, op):
        if op in ['*', '/']:
            return 2
        elif op in ['+', '-']:
            return 1
        return 0

    def apply_operator(self, a, b, op):
        if op == '+':
            return a + b
        elif op == '-':
            return a - b
        elif op == '*':
            return a * b
        elif op == '/':
            if b == 0:
                raise ValueError("Division by zero")
            return a / b

    def caculate(self):
        #formula = self.plainTextEdit.toPlainText()
        if not self.btn_input:
            return "Error: Empty formula"
        print(self.btn_input)

        # 토큰 파싱
        '''
        tokens, error = self.parse_tokens(formula)
        if error:
            return error
        '''

        # 연산자 우선순위에 따른 계산
        try:
            numbers = []
            operators = []
            
            for token in self.btn_input:
                if self.is_number(token):
                    numbers.append(float(token))
                else:
                    while (operators and 
                           self.get_operator_priority(operators[-1]) >= self.get_operator_priority(token)):
                        b = numbers.pop()
                        a = numbers.pop()
                        op = operators.pop()
                        numbers.append(self.apply_operator(a, b, op))
                    operators.append(token)
            
            while operators:
                b = numbers.pop()
                a = numbers.pop()
                op = operators.pop()
                numbers.append(self.apply_operator(a, b, op))
            
            if len(numbers) != 1:
                return "Error: Invalid formula"
            
            result = numbers[0]
            if result.is_integer():
                print(result)
                return int(result)
            print(result)
            return round(result, 10)
            
        except (ValueError, IndexError):
            return "Error: Invalid calculation"

    def display_result(self):
        result = self.caculate()
        if self.is_number(result):
            self.btn_input.clear()
            self.plainTextEdit.clear()
            self.btn_input.append(str(result))
            self.plainTextEdit.insertPlainText(str(result))
        else:
            self.btn_input.clear()
            self.plainTextEdit.clear()
            self.plainTextEdit.insertPlainText(result)
            self.isError = True

        
    def btn_num_Clicked(self, num):
        if self.isError == True:
            self.plainTextEdit.clear()
            self.isError = False
        
        if len(self.btn_input) == 0:
            self.btn_input.append(num)
            self.plainTextEdit.insertPlainText(num)
        else:
            if self.is_number(self.btn_input[-1]):
                self.btn_input[-1] += num
                self.plainTextEdit.insertPlainText(num)
            else:
                if self.btn_input[-1] == '-' and (len(self.btn_input) == 1 or self.btn_input[-2] in '+-*/'):
                    self.btn_input[-1] += num
                    self.plainTextEdit.insertPlainText(num)
                else:
                    if self.btn_input[-1][-1] == '.':
                        self.btn_input[-1] += num
                        self.plainTextEdit.insertPlainText(num)
                    else:
                        self.btn_input.append(num)
                        self.plainTextEdit.insertPlainText(num)

    def btn_token_Clicked(self, token):
        if self.isError == True:
            self.plainTextEdit.clear()
            self.isError = False
        
        if token in "+-":
            if len(self.btn_input) < 2:
                self.btn_input.append(token)
                self.plainTextEdit.insertPlainText(token)
            else:
                if self.btn_input[-2] in "*/":
                    result = self.caculate()
                    if not self.is_number(result):
                        self.btn_input.clear()
                        self.plainTextEdit.clear()
                        self.plainTextEdit.insertPlainText(result)
                    else:
                        self.btn_input.clear()
                        self.btn_input.append(str(result))
                        self.btn_input.append(token)
                        self.plainTextEdit.insertPlainText(token)
                else:
                    self.btn_input.append(token)
                    self.plainTextEdit.insertPlainText(token)
        elif token in "*/":
            self.btn_input.append(token)
            self.plainTextEdit.insertPlainText(token)
        elif token == ".":
            if len(self.btn_input) == 0 or self.btn_input[-1] in "+-*/":
                self.btn_input.append("0.")
                self.plainTextEdit.insertPlainText("0.")
            else:
                self.btn_input[-1] += "."
                self.plainTextEdit.insertPlainText(".")


    def all_clear(self):
        self.plainTextEdit.clear()
        self.btn_input.clear()

    def clear(self):
        input_str = self.plainTextEdit.toPlainText()
        if len(input_str) > 0:
            if input_str in ["Error: Empty formula", "Error: Invalid formula", "Error: Invalid caculation"]:
                self.plainTextEdit.clear()
            else:
                # 마지막 문자 지우기
                input_str = input_str[:-1]
                self.plainTextEdit.clear()
                self.plainTextEdit.insertPlainText(input_str)
                
                # btn_input 리스트에서도 마지막 문자 지우기
                if self.btn_input:
                    if self.is_number(self.btn_input[-1]):
                        if len(self.btn_input[-1]) == 1:
                            self.btn_input.pop(-1)
                        else:
                            self.btn_input[-1] = self.btn_input[-1][:-1]
                    else:
                        self.btn_input.pop(-1)

if __name__ == "__main__":
    app = QApplication(sys.argv)
    myWindows = WindowClass()
    myWindows.show()

    sys.exit(app.exec())