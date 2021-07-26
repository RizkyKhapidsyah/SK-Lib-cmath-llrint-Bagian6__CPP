#include <iostream>
#include <cmath>
#include <cfenv>
#include <conio.h>

using namespace std;

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    // by default, rounding direction is to-nearest i.e. fesetround(FE_TONEAREST)
    double x = 11.87;
    long long int hasil;
    hasil = llrint(x);
    cout << "Rounding to-nearest (" << x << ") = " << hasil << endl;

    // mid-way values are rounded off to higher integer
    x = 11.5;
    hasil = llrint(x);
    cout << "Rounding to-nearest (" << x << ") = " << hasil << endl;

    // setting rounding direction to DOWNWARD
    fesetround(FE_DOWNWARD);
    x = 11.87;
    hasil = llrint(x);
    cout << "Rounding downward (" << x << ") = " << hasil << endl;

    // setting rounding direction to UPWARD
    fesetround(FE_UPWARD);
    x = 33.32;
    hasil = llrint(x);
    cout << "Rounding upward (" << x << ") = " << hasil << endl;

    _getch();
    return 0;
}