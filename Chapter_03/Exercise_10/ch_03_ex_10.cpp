//
// Created by Stefan Diaconu on 26/05/2025.
//

#include "../../std_lib_facilities.h"

int main()
{
    cout << "Please enter an operation and 2 operands (* 4 5);";
    string operation;
    double operand1, operand2;
    cin >> operation >> operand1 >> operand2;

    if (operation == "+") {
        cout << operand1 << " add " << operand2 << " equals " << operand1 + operand2 << endl;
    } else if (operation == "-") {
        cout << operand1 << " minus " << operand2 << " equals " << operand1 - operand2 << endl;
    } else if (operation == "*") {
        cout << operand1 << " multiplied by " << operand2 << " equals " << operand1 * operand2 << endl;
    } else if (operation == "/") {
        cout << operand1 << " divided by " << operand2 << " equals " << operand1 / operand2 << endl;
    }

    return 0;
}