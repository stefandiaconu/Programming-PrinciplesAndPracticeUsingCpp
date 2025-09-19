//
// Created by Stefan Diaconu on 06/06/2025.
//

#include "../../std_lib_facilities.h"

int main()
{
    cout << "Please enter 2 numbers and an operator: " << endl;
    double n1, n2;
    char op;
    while (cin >> n1 >> n2 >> op) {
        if (op == '|') break;
        switch (op) {
            case '+':
                cout << "The sum of " << n1 << " and " << n2 << " is " << n1 + n2 << endl;
                break;
            case '-':
                cout << "The difference of " << n1 << " and " << n2 << " is " << n1 - n2 << endl;
                break;
            case '*':
                cout << "The product of " << n1 << " and " << n2 << " is " << n1 * n2 << endl;
                break;
            case '/':
                cout << "The division of " << n1 << " by " << n2 << " is " << n1 / n2 << endl;
                break;
            default:
                cout << "Not a valid operator to perform simple calculation!" << endl;
        }
    }
    return 0;
}