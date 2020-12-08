
#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	const int N = 5;
	const int M = 5;
	int a[N][M] = { {4, 5, 7, 6, 9}, {5, 3, 4, 3, 1},
	{9, 5, 4, 5, 5}, {9, 8, 6, 4, 8}, {8, 8, 2, 6, 7} };
	int sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			sum += a[i][j];
		}
	}
	cout << sum;
	return 0;
}
