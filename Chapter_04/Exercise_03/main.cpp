//
// Created by Stefan Diaconu on 01/06/2025.
//

#include "../../std_lib_facilities.h"

int main()
{
    vector<double> distances;
    for (double distance; cin >> distance;)
        distances.push_back(distance);

    double sum = 0;
    for (double x : distances) sum += x;
    cout << "The total distance between cities is: " << sum << endl;
    cout << "Mean distance is: " << sum / distances.size() << endl;

    sort(distances);
    cout << "The smallest distance between 2 cities is: " << distances.front() << endl;
    cout << "The greatest distance between 2 cities is: " << distances.back() << endl;

    return 0;
}