//
// Created by Stefan Diaconu on 28/07/2025.
//

#include "../../std_lib_facilities.h"

void print(const string &label, const vector<int> &v)
{
    for(int i : v)
        cout << label << ":" << i << "\n";
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print("Label", v);

    return 0;
}