#include <iostream>
using namespace std;


void SumFact(int n) {

	double i = 0;
	long double sum = 0, temp = 1;

	while (n < 100) {

		temp *= (i + 1);
		sum += 1 / (pow(temp, 2));
		n++;
		i++;
	}
	cout << sum << endl;
	system("pause");
}

void EnterNum(int n) {
	cout << "Enter first num: " << endl;
	cin >> n;
 	SumFact(n);
}

int main()
{
	int n = 0;
	EnterNum(n);
	return 0;
}