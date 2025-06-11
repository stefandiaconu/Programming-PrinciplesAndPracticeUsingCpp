//
// Created by Stefan Diaconu on 11/06/2025.
//

#include "../../std_lib_facilities.h"

double ctok(const double c)
{
    const double k = c + 273.15;
    return k;
}

int main ()
{
    double c = 0;
    cin >> c;
    const double k = ctok(c);
    cout << k << '\n';

    return 0;
}