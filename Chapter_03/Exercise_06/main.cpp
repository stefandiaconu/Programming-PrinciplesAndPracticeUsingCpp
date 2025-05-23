//
// Created by Stefan Diaconu on 23/05/2025.
//

#include "../../std_lib_facilities.h"
#include <vector>

int main()
{
    cout << "Please enter 3 integers: ";
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    string sequence;
    vector<int> numbers = { n1, n2, n3 };
    sort(numbers.begin(), numbers.end());
    std::ostringstream oss;
    for (size_t i = 0; i < numbers.size(); ++i) {
        oss << numbers[i];
        if (i != numbers.size() - 1) {
            oss << ", ";
        }
    }
    sequence = oss.str();
    cout << sequence << endl;

    return 0;
}