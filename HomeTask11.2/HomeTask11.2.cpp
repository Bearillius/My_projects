/*Реализовать алгоритм бинарного поска
(для поиска первого или последнего вхождения искомого элемента в последовательность).*/
#include <stdio.h>
#include <iostream> 
#include <cstdlib>
using namespace std;

int Enter(int* num, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter numbers: " << endl;
        cin >> num[i];
    }
    cout << '\n';
    cout << "Array is: " << endl;
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
    return *num;
}

void BinFind(int* num, int n, int key) {
    int L = 0;
    int R = n;
    int search = -1;
    while (L <= R)
    {
        int mid = (L + R) / 2;
        if (key == num[mid]) {
            search = mid;
            cout << "Element is: " << search << endl;
            break;
        }
        if (key < num[mid]) {
            R = mid - 1;
        }
        else {
            L = mid + 1;
        }
    }
    if (search == -1) {
        cout << "Element not found..." << endl;
            }
}
       
   

int main() {
    int n, key;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int* num = new int[n];
    Enter(num, n);
    cout << "Enter the key : ";
    cin >> key;
    BinFind(num, n, key);
    system("pause");
    return 0;
}