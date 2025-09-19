//
// Created by Stefan Diaconu on 26/05/2025.
//

#include "../../std_lib_facilities.h"

int main()
{
    cout << "Please enter an integer: ";
    int number;
    cin >> number;

    if (number % 2 == 0) {
        cout << "The value " << number << " is an even number." << endl;
    } else {
        cout << "The value " << number << " is an odd number." << endl;
    }

    return 0;
}