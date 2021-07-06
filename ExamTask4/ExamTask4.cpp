#include <iostream>
using namespace std;

//дан двумерный массив, прибавить к каждому элементу массива среднее значение строки массива 

void PrintArr(int(&Arr)[3][3], int N, int M) {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cout << Arr[i][j] << " ";
			cout << endl;
		}
	}
	cout << endl;
}

void SumArr(int(&Arr)[3][3], int N, int M) {
	
	for (int i = 0; i < N; i++) {
		int sum = 0;
		for (int j = 0; j < M; j++) {
			sum += Arr[i][j];
		}
		for (int m = 0; m < M; m++) {
			Arr[i][m] += sum / 3;
		}
	}
	PrintArr(Arr, N, M);
	delete Arr;
	system("pause");
}

int main(){

   const int N = 3, M = 3;
   int Arr[N][M];
   cout << "Enter element Arr: " << endl;
   for (int i = 0; i < N; ++i) {
	   for (int j = 0; j < M; ++j) {
		   cin >> Arr[i][j];
	   }
	   cout << endl;
   }
   
   cout << "Array is: " << endl;
   PrintArr(Arr, N, M);
   cout << "Change Arr: " << endl;
   SumArr(Arr, N, M);

   return 0;
}
