#include <iostream> 
using namespace std;

int Enter(int *num) {
        for (int i = 0; i < 4; i++) {
        cout << "Enter numbers: " << endl;
        cin >> num[i];
    }
        cout << '\n';
    return *num;
}

void biMin(int* num) {
    int i = 0, j;
    do {
        j = i + 1;
        if (num[i] > num[j]) {
            cout << num[j] << endl;
        }
        else {
            cout << num[i] << endl;
        }
        i++;
    } while (i < 3);
}
                         
void Menu(int* num) {
    int m = 0;
    cout << "1 - Find min" << endl;
    cout << "2 - Exit" << endl;
    cin >> m;
    switch (m)
    {
    case 1:
    {
        Enter(num);
        biMin(num);
        system("pause");
        break;
    };

    system("pause");

    case 2:
    {
        break;
    };
    }
}

int main()
{
    int* num = new int[4];
        Menu(num);
}