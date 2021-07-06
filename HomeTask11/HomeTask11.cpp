#include <stdio.h>
#include <iostream> 
using namespace std;

int Enter(int* num, int n) {
            for (int i = 0; i < n; i++) {
        cout << "Enter numbers: " << endl;
        cin >> num[i];
    }
    cout << '\n';
    return *num;
}

/*void Sort(int* num, int n) {
    for (int i = 1; i < n; i++) {
        int x, j;
        x = num[i];
        j = i - 1;
        while ((x < num[j]) && (j >= 0)) {
            num[j + 1] = num[j];
            j = j - 1;
        }
        num[j + 1] = x;
    }
}*/
      
   
/*void Sort1(int* num, int n) {
    for (int i = 0; i < (n-1); i++) {
        int x = num[i];
        int k = i;
        for (int j = i + 1; j < n; j++){
            if (num[j] < x) { 
                k = j;
                x = num[j];}
                    }
        num[k] = num[i];
        num[i] = x;
            }
}*/

/*void Sort2(int* num, int n) {
    for (int i = 0; i < (n-1); i++) {
      
        for (int j = (n-1); j > i; j--) {

            if (num[j - 1] > num[j]) {
                int x = num[j - 1];
                num[j - 1] = num[j];
                num[j] = x;
            }
        }
    } 
}*/


int main(){
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int* num = new int[n];
    Enter(num, n);
    /*Sort(num, n);*/
    /*Sort1(num, n);*/
    /*Sort2(num, n);*/
    for (int i = 0; i < n; i++) 
        printf("%d ", num[i]);
    getchar(); getchar();
        return 0;
    
}