#include "stdafx.h"
#include <iostream> 

using namespace std;

void Enter(int **num, int con) {
	for (int i = 0; i < con; i++){
	cout << "Enter numbers: " << endl;
	cin >> *num[i];
	}
}

int biMin(int num1, int num2)
{
	if (num1 > num2) return num2;

	else return num1;
}


int FindMin(int* num) {
	int tmp;
	for (int i = 0; i<4; i++){
		 tmp = biMin(num[i], num[i+1]);
		 cout << tmp << endl;
	}
}


int Menu(int** num) {
    int n = 0;
    cout << "1 - Find min" << endl;
    cout << "2 -Выйти" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
    {
        Enter(num);
        FindMin(num);
        break;
    };

    case 2:
    {
		break;
    };
    }
}

   

int main()
{
	int* num = new int[4];

	Menu(&num);
}
