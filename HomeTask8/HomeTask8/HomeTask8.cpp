#include <iostream>
using namespace std;

struct TStudent {

	char name[15];
	char firstname[15];
	int year;
	char symbol = ' ';
};

void EnterStudentInfo(TStudent& student) {
	cout << "\n" << "Enter student name: ";
	cin >> student.name;
	cout << "\n" << "Enter student firstname: ";
	cin >> student.firstname;
	cout << "\n" << "Enter years: ";
	cin >> student.year;
	cout << "\n" << "Enter symbol: ";
	cin >> student.symbol;
}

void PrintStudentInfo(TStudent& student) {

	cout << "\n" << student.name[0] << ". " << student.firstname;
}


int main() {

	TStudent arr_students[5];
	for (int i = 0; i <= 4; i++)
	{
		EnterStudentInfo(arr_students[i]);
	}
	cout << "\n" << "\n" << "Names and firstname students:" << endl;
	for (int i = 0; i <= 4; i++)
	{
		PrintStudentInfo(arr_students[i]);
	}
}