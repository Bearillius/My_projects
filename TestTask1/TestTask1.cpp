#include <iostream>
#include <ctime> 

using namespace std;

int main()
{
	// заполнить матрицу слчайными значениями и поменять местами четные и нечетные строки 
	srand((unsigned)time(NULL));
	const int n = 4, m = 5;
	cout << "Array is..." << endl;
	cout << endl;
	
	int** arr = new int* [n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = ((rand() % 10));
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Changed Array is..." << endl;
	cout << endl; 

	for (int i = 0; i < n; i = i + 2)
	{
		for (int j = 0; j < m; ++j)
		{
			int tmp = arr[i][j];
			arr[i][j] = arr[i+1][j];
			arr[i+1][j] = tmp;
			
		}
	}
	
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			/*printf("%d%c", arr[i][j], j < m - 1 ? ' '\n');*/
			cout << arr[i][j] << ' ';
		}
		cout << "\n";
	}
	cout << endl;

		system("pause");
		
		for (int i = 0; i < n; i++)
		{
			delete[]arr[i];
		}
		delete[] arr;
		return 0;
}