//
// Created by Stefan Diaconu on 27/05/2025.
//

#include "../../std_lib_facilities.h"

int main()
{
    vector<double> temps;
    cout << "Please enter numbers separated by spaces:" << endl;
    for (double temp; cin >> temp; ) {
        temps.push_back(temp);
    }

    double sum = 0;
    for (double x : temps) sum += x;
    cout << "Average temperature: " << sum / temps.size() << endl;

    sort(temps);
    if (temps.size() % 2 != 0) {
        cout << "Median temperature: " << temps[temps.size() / 2] << endl;
    } else {
        cout << "Median temperature: " << (temps[(temps.size() - 1) / 2] + temps[temps.size() / 2]) / 2 << endl;
    }

    return 0;
}