//
// Created by Stefan Diaconu on 06/06/2025.
//

#include "../../std_lib_facilities.h"

int convert_to_digit(string s)
{
    int digit = 0;
    if (s == "zero") digit = 0;
    else if (s == "one") digit = 1;
    else if (s == "two") digit = 2;
    else if (s == "three") digit = 3;
    else if (s == "four") digit = 4;
    else if (s == "five") digit = 5;
    else if (s == "six") digit = 6;
    else if (s == "seven") digit = 7;
    else if (s == "eight") digit = 8;
    else if (s == "nine") digit = 9;
    return digit;
}

int main()
{
    vector<string> string_numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << "Please enter a digit: " << endl;
    int number;
    while (cin >> number) {
        cout << string_numbers[number] << endl;
        cout << convert_to_digit(string_numbers[number]) << endl;
    }

    return 0;
}
