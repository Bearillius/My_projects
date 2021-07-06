#include <iostream>
#include <math.h>
#include "cmath"
using namespace std;
#define _USE_MATH_DEFINES


void tab(int a, int b, int n) {
    int x = a; int c;
    while (x < n) {
        c = x + b;
        x = c;
        cout << "members of the arithmetic progression: " << c << endl;
    }
        system("pause");
}


int main()
{
    int a, b, n;
    cout << "Enter first number, const, and limit: " << endl;
    cin >> a >> b>> n;
    tab(a, b, n);
}