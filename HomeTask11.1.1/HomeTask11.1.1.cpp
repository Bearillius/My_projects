/*Реализовать алгоритм линейного поиска для
- поиска первого элемента, соответствующего ключу поиска;
-поиска последнего элемента, соответствующего ключу поиска;
-поиска всех элементов, соответствующих ключу поиска.
*/
#include <stdio.h>
#include <iostream> 
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

/*void LineFindAllKey(int* num, int* arr, int n, int key) {
    int h = 0;
    for (int i = 0; i < n; i++) {
        if (num[i] == key) {
            arr[h++] = i;
        }
    }
    if (h != 0) {
        for (int i = 0; i < h; i++) {
            cout << "Key in:  " << arr[i] << endl;
        }
    }
    else {
        cout << "No key value found..."<<endl;
    }
    system("pause");
}*/

/*void LineFindFirstKey(int* num, int* arr, int n, int key) {
    int h = 0;
    for (int i = 0; i < n; i++) {
        if (num[i] == key) {
            arr[h++] = i;
        }
    }

    if (h != 0) {
        for (int i = 0; i < h; i++) {
               cout << "Key in:  " << arr[i] << endl;
               break;
            }
        }
    else {
        cout << "No key value found..." << endl;
    }
    system("pause");
}*/

/*void LineFindLastKey(int* num, int* arr, int n, int key) {
    int h = 0;
    for (int i = 0; i < n; i++) {
        if (num[i] == key) {
            arr[h++] = i;
        }
    }
    if (h != 0) {
        int i = 1;
        do {
            i++;
        } while (i <= h);
            cout << "Key in:  " << arr[i] << endl;
        }
    else {
        cout << "No key value found..." << endl;
    }
    system("pause");
}*/


int main() {
    int n, key;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int* num = new int[n];
    int* arr = new int[n];
    Enter(num, n);
    cout << "Enter the key : ";
    cin >> key;
    /*LineFindAllKey(num, arr, n, key);*/
    /*LineFindFirstKey(num, arr, n, key);*/
    /*LineFindLastKey(num, arr, n, key);*/
    return 0;
}