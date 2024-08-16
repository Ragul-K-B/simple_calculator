from flask import Flask,Blueprint, render_template, redirect, url_for,request
import requests
app = Flask(__name__)

@app.route('/',methods=['POST','GET'])
def index():
    if request.method == 'POST':
        operand1 = float(request.form.get('operand1'))
        operator = request.form.get('operator')
        operand2 = float(request.form.get('operand2'))

        if operator == '+':
            result = operand1 + operand2
        elif operator == '-':
            result = operand1 - operand2
        elif operator == '*':
            result = operand1 * operand2
        elif operator == '/':
            if operand2 != 0:
                result = operand1 / operand2
            else:
                result = 'Error: Division by zero'
        else:
            result = 'Error: Invalid operator'

        return render_template('index.html', result=result)
    return render_template('index.html', result=None)
if __name__ == '__main__':
    app.run(debug=True)