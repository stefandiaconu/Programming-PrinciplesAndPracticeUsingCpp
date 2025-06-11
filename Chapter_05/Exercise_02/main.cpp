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
    if (c < -273.15) {
        cerr << "Input below absolute temperature that can be reached!\n";
        return 1;
    }
    const double k = ctok(c);
    cout << k << '\n';

    return 0;
}