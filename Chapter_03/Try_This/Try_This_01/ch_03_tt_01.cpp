//
// Created by Stefan Diaconu on 20/05/2025.
//

#include "../../std_lib_facilities.h"

int main()
{
    cout << "Please enter an value: ";
    int n;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\nthree times n == " << 3*n
         << "\ntwice n == " << n + n
         << "\nn squared == " << n * n
         << "\nhalf of n == " << n / 2
         << "\nremainder dividing n by 2 == " << n % 2
         << "\nsquare root of n == " << sqrt(n)
         << '\n';
    return 0;
}