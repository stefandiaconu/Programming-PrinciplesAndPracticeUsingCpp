//
// Created by Stefan Diaconu on 25/07/2025.
//

#include <iostream>
using namespace std;

#include "my.h"

int main()
{
    // Exercise 1
    // foo = 7;
    // print_foo();
    // print(99);

    // Exercise 2
    // int x = 7;
    // int y = 9;
    // swap_v(x,y);
    // cout << "x = " << x << " y = " << y << endl;
    // swap_r(x,y);
    // cout << "x = " << x << " y = " << y << endl;
    // swap_cr(x,y);
    // cout << "x = " << x << " y = " << y << endl;
    // swap_v(7,9);
    // // swap_r(7,9);
    // swap_cr(7,9);
    // const int cx = 7;
    // const int cy = 9;
    // swap_v(cx,cy);
    // cout << "cx = " << cx << " cy = " << cy << endl;
    // // swap_r(cx,cy);
    // swap_cr(cx,cy);
    // cout << "cx = " << cx << " cy = " << cy << endl;
    // swap_v(7.7,9.9);
    // double dx = 7.7;
    // double dy = 9.9;
    // swap_v(dx,dy);
    // cout << "dx = " << dx << " dy = " << dy << endl;
    // // swap_r(dx,dy);
    // swap_cr(dx,dy);
    // cout << "dx = " << dx << " dy = " << dy << endl;

    // Exercise 3
    X::var = 7;
    X::print();
    using namespace Y;
    var = 9;
    print();
    {
        using Z::var;
        using Z::print;
        var = 11;
        print();
    }
    print();
    X::print();

    return 0;
}