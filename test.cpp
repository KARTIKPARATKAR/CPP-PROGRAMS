#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string operation;
    double num1, num2;
    cout << "Extended Calculator\n";
    cout << "Enter an operation (+, -, *, /, %, ^, sqrt, !, abs, sin, cos, tan, log, ln): ";
    cin >> operation;
    if (operation == "sqrt" || operation == "!" || operation == "abs" || operation == "sin" || operation == "cos" || operation == "tan" || operation == "log" || operation == "ln") {
        cout << "Enter a number: ";
        cin >> num1;
    } else {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    if (operation == "+") {
        cout << "Addition is: " << num1 + num2 << endl;
    } else if (operation == "-") {
        cout << "Subtraction is: " << num1 - num2 << endl;
    } else if (operation == "*") {
        cout << "Multiplication is: " << num1 * num2 << endl;
    } else if (operation == "/") {
        if (num2 != 0) {
            cout << "Division: " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } else if (operation == "%") {
        cout << "Remainder is " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
    } else if (operation == "^") {
        cout << "num2 th power of num1 is: " << pow(num1, num2) << endl;
    } else if (operation == "sqrt") {
        cout << "Square root is: " << sqrt(num1) << endl;
    } else if (operation == "!") {
        int factorial = 1;
        for (int i = 1; i <= int(num1); ++i) {
            factorial *= i;
        }
        cout << "Factorial is: " << factorial << endl;
    } else if (operation == "abs") {
        cout << "Absolute value: " << fabs(num1) << endl;
    } else if (operation == "sin") {
        cout << "Sine value of radian(num1) is: " << sin(num1) << endl;
    } else if (operation == "cos") {
        cout << "Cosine value of radian(num1) is: " << cos(num1) << endl;
    } else if (operation == "tan") {
        cout << "Tangent value of radian(num1) is: " << tan(num1) << endl;
    } else if (operation == "log") {
        if (num1 > 0) {
            cout << "Logarithmic value of num1 with base 10 is: " << log10(num1) << endl;
        } else {
            cout << "Error: Logarithm of non-positive number is undefined." << endl;
        }
    } else if (operation == "ln") {
        if (num1 > 0) {
            cout << "logarithmic value of num1 with base e is: " << log(num1) << endl;
        } else {
            cout << "Error: Natural logarithm of non-positive number is undefined." << endl;
        }
    } else {
        cout << "Error: Invalid operation." << endl;
    }
    return 0;
}
