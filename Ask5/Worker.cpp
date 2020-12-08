#include "stdafx.h"
#include "Staff.h"


TWorker::TWorker() {

	strcpy_s(name, "\0");
	code = 0;
	salary = 0.0;

	pPrev = NULL;
	pNext = NULL;
}

void TWorker::EnterWorkerInfo() {

	cout << "Enter worker name: ";
	cin >> this->name;
	cout << "Enter worker code: ";
	cin >> this->code;
	cout << "Enter worker salary: ";
	cin >> this->salary;
}

void TWorker::PrintWorkerInfo() {

	cout << "Name: " << this->name << endl;
	cout << "Code: " << this->code << endl;
	cout << "Salary: " << this->salary << endl;
}
