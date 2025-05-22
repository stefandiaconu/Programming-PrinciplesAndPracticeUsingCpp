//
// Created by Stefan Diaconu on 21/05/2025.
//

#include "../../std_lib_facilities.h"

int hcfFunc(int a, int b)
{
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    cout << "Please enter first integer: ";
    int val1;
    cin >> val1;
    cout << "Integer 1: " << val1 << endl;
    cout << "Please enter second integer: ";
    int val2;
    cin >> val2;
    cout << "Integer 2: " << val2 << endl;
    if (val1 > val2) {
        cout << "Integer 1 is bigger than integer 2" << endl;
    } else {
        cout << "Integer 2 is bigger than integer 1" << endl;
    }
    cout << "The sum of the 2 integers is: " << val1 + val2 << endl;
    cout << "The difference of the 2 integers is: " << val1 - val2 << endl;
    cout << "The product of the 2 integers is: " << val1 * val2 << endl;

    int hcf = hcfFunc(val1, val2);
    cout << "HCF: " << hcf << endl;
    cout << "The ratio of the 2 numbers is: " << val1 / hcf << ":" << val2 / hcf << endl;

    return 0;
}