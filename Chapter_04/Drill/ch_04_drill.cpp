//
// Created by Stefan Diaconu on 26/05/2025.
//

#include "../../std_lib_facilities.h"

int main()
{
    double number;
    double n1 = 0, n2 = 0;
    double sum = 0;
    int num_entered = 0;
    string unit = " ";
    vector<double> values_entered;
    cout << "Enter a numbers and a length unit: ";
    while (cin >> number >> unit) {
        double converted_value = 0;
        if (unit == "cm") {
            converted_value = number / 100;
            values_entered.push_back(converted_value);
            sum += converted_value;
            ++num_entered;
            cout << "The value entered is " << number << unit << " and converted is " << converted_value << " meters" << endl;
        } else if (unit == "m") {
            converted_value = number;
            values_entered.push_back(converted_value);
            sum += converted_value;
            ++num_entered;
            cout << "The value entered is " << number << unit << endl;
        } else if (unit == "in") {
            converted_value = number * 0.0254;
            values_entered.push_back(converted_value);
            sum += converted_value;
            ++num_entered;
            cout << "The value entered is " << number << unit << " and converted is " << converted_value << " meters" << endl;
        } else if (unit == "ft") {
            converted_value = number * 0.3048;
            values_entered.push_back(converted_value);
            sum += converted_value;
            ++num_entered;
            cout << "The value entered is " << number << unit << " and converted is " << converted_value << " meters" << endl;
        } else {
            cout << "Not a valid unit." << endl;
        }

        if (converted_value < n1 || n1 == 0) {
            n1 = converted_value;
            cout << "The smallest so far " << n1 << endl;
        }

        if (converted_value > n2) {
            n2 = converted_value;
            cout << "The largest so far " << n2 << endl;
        }

        // if (n1 == n2) {
        //     cout << "The numbers are equal." << endl;
        // } else {
        //     if (n1 < n2) {
        //         cout << "The smaller value is: " << n1 << endl;
        //     } else {
        //         cout << "The larger value is: " << n1 << endl;
        //     }
        //
        //     if (n1 > n2) {
        //         cout << "The smaller value is: " << n2 << endl;
        //     } else {
        //         cout << "The larger value is: " << n2 << endl;
        //     }
        //
        //     const double difference = n1 - n2;
        //     if (abs(difference) < 0.01) {
        //         cout << "The numbers are almost equal." << endl;
        //     }
        // }
    }
    cout << "The smallest number is: " << n1 << '\n'
            << "The largest number is: " << n2 << '\n'
            << "The number of values entered is: " << num_entered << '\n'
            << "The sum is: " << sum << " meters" << endl;

    sort(values_entered.begin(), values_entered.end());
    cout << "Values entered are:" << endl;
    for (const double value : values_entered) {
        cout << value << " ";
    }

    return 0;
}