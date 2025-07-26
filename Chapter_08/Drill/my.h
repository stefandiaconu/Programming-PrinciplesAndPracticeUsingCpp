//
// Created by Stefan Diaconu on 25/07/2025.
//

#ifndef MY_H
#define MY_H

extern int foo;
void print_foo();
void print(int);

void swap_v(int,int);
void swap_r(int&,int&);
void swap_cr(const int&,const int&);

namespace X {
    inline int var;
    void print();
}

namespace Y {
    inline int var;
    void print();
}

namespace Z {
    inline int var;
    void print();
}

#endif //MY_H
