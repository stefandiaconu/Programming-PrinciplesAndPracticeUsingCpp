//
// Created by Stefan Diaconu on 11/06/2025.
//

#include "../../std_lib_facilities.h"

double ctok(const double c)
{
    const double k = c + 273.15;

    if (c < -273.15) {
        cerr << "Input below absolute temperature that can be reached!\n";
        throw exception();
    }

    return k;
}

int main ()
{
    double c = 0;
    cin >> c;
    try {
        const double k = ctok(c);
        cout << k << '\n';
    }
    catch (...) {
        return 1;
    }

    return 0;
}