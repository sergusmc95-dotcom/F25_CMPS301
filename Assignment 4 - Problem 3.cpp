#include <iostream>
#include <cmath>
using namespace std;

int main() {

    string op;
    double num1, num2;
    char again = 'Y';

    cout << "Welcome to the Basic Math Calculator!" << endl;

    while (again == 'Y' || again == 'y') {

        cout << "\nEnter an operator (+, -, *, /, %, ^, sin, asin, cos, acos, tan, atan, atan2, sqrt, ceil, abs, floor, max, min, log, log10, log2, round): ";
        cin >> op;

        // Some operations require 1 number, others require 2
        if (op == "+" || op == "-" || op == "*" || op == "/" || op == "%" ||
            op == "^" || op == "max" || op == "min" || op == "atan2")
        {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }
        else {
            cout << "Enter number: ";
            cin >> num1;
        }

        // Solve using conditional statements
        if (op == "+")
            cout << "Result = " << num1 + num2 << endl;

        else if (op == "-")
            cout << "Result = " << num1 - num2 << endl;

        else if (op == "*")
            cout << "Result = " << num1 * num2 << endl;

        else if (op == "/") {
            if (num2 == 0)
                cout << "Error: Division by zero!" << endl;
            else
                cout << "Result = " << num1 / num2 << endl;
        }

        else if (op == "%")
            cout << "Result = " << fmod(num1, num2) << endl;

        else if (op == "^")
            cout << "Result = " << pow(num1, num2) << endl;

        else if (op == "sin")
            cout << "Result = " << sin(num1) << endl;

        else if (op == "asin")
            cout << "Result = " << asin(num1) << endl;

        else if (op == "cos")
            cout << "Result = " << cos(num1) << endl;

        else if (op == "acos")
            cout << "Result = " << acos(num1) << endl;

        else if (op == "tan")
            cout << "Result = " << tan(num1) << endl;

        else if (op == "atan")
            cout << "Result = " << atan(num1) << endl;

        else if (op == "atan2")
            cout << "Result = " << atan2(num1, num2) << endl;

        else if (op == "sqrt")
            cout << "Result = " << sqrt(num1) << endl;

        else if (op == "ceil")
            cout << "Result = " << ceil(num1) << endl;

        else if (op == "abs")
            cout << "Result = " << fabs(num1) << endl;

        else if (op == "floor")
            cout << "Result = " << floor(num1) << endl;

        else if (op == "max")
            cout << "Result = " << fmax(num1, num2) << endl;

        else if (op == "min")
            cout << "Result = " << fmin(num1, num2) << endl;

        else if (op == "log")
            cout << "Result = " << log(num1) << endl;

        else if (op == "log10")
            cout << "Result = " << log10(num1) << endl;

        else if (op == "log2")
            cout << "Result = " << log2(num1) << endl;

        else if (op == "round")
            cout << "Result = " << round(num1) << endl;

        else
            cout << "Invalid operator!" << endl;

        // ask to continue
        cout << "\nWould you like to solve another problem? (Y/N): ";
        cin >> again;
    }

    cout << "\nThanks for using the Basic Math Calculator!" << endl;
    return 0;
}