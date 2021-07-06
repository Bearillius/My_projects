#include <iostream>
#include <cmath>

using namespace std;

void Sinus(double x1) {
	double h = 0.5;
	double y;
	while (x1 < 10) {
		y = sin(x1);
		cout << y << endl;
		x1 = x1 + h;
	}
}

int main()
{
	double x1 = -10;
	Sinus(x1);
	system("pause");
	return 0;
}