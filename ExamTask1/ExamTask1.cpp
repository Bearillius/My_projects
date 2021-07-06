#include <iostream>
using namespace std;

void Sums(int x1, int x2, int count) {

	for (int i = x1; i <= x2; i++) {
		if (i % 2 != 0) {
			count = count + i;
		}
	}
	cout << count << endl;
	system("pause");
}


void EnterElements(int x1, int x2, int count) {
	cout << "Enter first numb: ";
	cin >> x1;
	cout << "Enter last numb: ";
	cin >> x2;
	Sums(x1, x2, count);
}



int main(){

	int x1 = 0, x2 = 0, count = 0;
	EnterElements(x1, x2, count);
	
	return 0;
}