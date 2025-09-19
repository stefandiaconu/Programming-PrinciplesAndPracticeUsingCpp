//
// Created by Stefan Diaconu on 08/06/2025.
//

#include "../../std_lib_facilities.h"

int main()
{
    try {
        // cout << "Success!\n";
        // cout << "Success!\n";
        // cout << "Success!" << "\n";
        // cout << "Success!" << '\n';
        // constexpr int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
        // vector<int> v(10); v[5] = 7; if (v[5] == 7) cout << "Success!\n";
        // if (true) cout << "Success!\n"; else cout << "Fail!\n";
        // constexpr bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";
        // const string s = "ape"; const bool c = "fool" > s; if (c) cout << "Success!\n";
        // const string s = "ape"; if (s != "fool") cout << "Success!\n";
        // const string s = "ape"; if (s != "fool") cout << "Success!\n";
        // const string s = "ape"; if ("fool") cout << "Success!\n";
        // const vector<char> v(1); for (int i = 0; i < v.size(); ++i) cout << "Success!\n";
        // const vector<char> v(5); for (int i = 4; i < v.size(); ++i) cout << "Success!\n";
        // const string s = "Success!\n"; for (int i = 0; i < s.length(); ++i) cout << s[i];
        // if (true) cout << "Success!\n"; else cout << "Fail!\n";
        // constexpr int x = 2000; constexpr int c = x; if (c == 2000) cout << "Success!\n";
        // const string s = "Success!\n"; for (int i = 0; i < s.length(); ++i) cout << s[i];
        // const vector<int> v(1); for (int i = 0; i < v.size(); i++) cout << "Success!\n";
        // int i = 0; int j = 9; while (i < 10) ++i; if (j < i) cout << "Success!\n";
        // constexpr double x = 2; constexpr double d = 5.0 / (x / 2); if (d == 2 * (x + 0.5)) cout << "Success!\n";
        // vector<char> s = { 'S','u','c','c','e','s','s','!','\n' }; for (const char i : s) cout << i;
        // int i = 0; int j = 9; while (i < 10) ++i; if (j < i) cout << "Success!\n";
        // constexpr int x = 4; constexpr double d = 5.0 / (x - 2); if (d == 2 + 0.5) cout << "Success!\n";
        cout << "Success!\n";

        return 0;
    }
    catch(exception& e) {
        cerr << "error: " << e.what() << endl;
        return 1;
    }
    catch (...) {
        cerr << "Oops: unknown exception!\n";
        return 2;
    }
}