#include <iostream>
#include <stdio.h>
using namespace std;

void reverse_array(int array[], int size) {
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
int main() {
    const int size = 7;
    int array[] = { 1, 2, 3, 4, 5, 6, 7 };

    reverse_array(array, size);

    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }
    return 0;
}