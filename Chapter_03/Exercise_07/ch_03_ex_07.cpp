//
// Created by Stefan Diaconu on 23/05/2025.
//

#include "../../std_lib_facilities.h"

int main()
{
    cout << "Please enter 3 strings: ";
    string string1, string2, string3;
    cin >> string1 >> string2 >> string3;

    string sequence;
    vector<string> names = { string1, string2, string3 };
    sort(names.begin(), names.end());
    std::ostringstream oss;
    for (size_t i = 0; i < names.size(); ++i) {
        oss << names[i];
        if (i != names.size() - 1) {
            oss << ", ";
        }
    }
    sequence = oss.str();
    cout << sequence;

    return 0;
}