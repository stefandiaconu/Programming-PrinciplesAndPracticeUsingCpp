//
// Created by Stefan Diaconu on 15/06/2025.
//

#include "../../std_lib_facilities.h"

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double discriminant = pow(b, 2) - 4 * a * c;
    if (discriminant < 0) {
        cerr << "This equation does not have real solution" << endl;
    } else if (discriminant == 0) {
        double x = (-b + sqrt(discriminant)) / (2 * a);
        cout << "x = " << x << endl;
    } else {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    return 0;
}