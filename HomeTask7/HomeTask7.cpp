#include <iostream>
using namespace std;

void work(char* Array) {
    int k, m = 0, i = 0;
    while (i < 80) {
        if (Array[i] == ' ') {
            m++;
        }
        i++;
    }
    k = m + 1;
    cout << "\t" << k << " \n";
}


int main() {
    setlocale(LC_ALL, "rus");
    char Array[80];
    cout << "\tНапишите строку\n";
    cin.get(Array, 80);
    work(Array);
}
