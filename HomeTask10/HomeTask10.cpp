#include <iostream>
#include <math.h>
#include "cmath"
using namespace std;
#define _USE_MATH_DEFINES


void tab(int a, int b) {
     double x = a;
    double n;
    while (x < b) {
        n = sqrt(x);
        x = x + 0.1;
        cout <<"square root of "<<x<<": "<< n << endl;
    }
    system("pause");
}


int main()
{
    int a, b;
    cout << "Enter numbers: " << endl;
    cin >> a >> b;
    tab(a, b);
}
