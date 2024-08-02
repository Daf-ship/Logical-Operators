// Logical Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8;
    bool A = 0, B = 1;
    cout << (((e > f) && (g == 7)) || (B || A));
    cout << "  first an" << endl;
    cout << (!(e > f) && (f == 7) || (B || A));
    cout << "  second an" << endl; 

    cout << ((e > f) && (g = 7));


    return 0;
    
}

