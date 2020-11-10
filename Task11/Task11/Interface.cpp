#include "stdafx.h"
#include "Interface.h"

int MainMenu(TStaff& staff) {
	int n = 0;

	cout << "1 - Add Workers"<< endl;
	cout << "2 - Show All Workers" << endl;
	cout << "3 - Get Max Salary" << endl;
	cout << "4 - Exit" << endl;

	cin >> n;

	switch(n) {
	case 1: staff.pBegin ? staff.Add() : staff.Create();break;

	case 2: staff.ShowWorkers(); break;
		

	case 3:{
		cout << "Worker with MAX salary is: " << endl;
		TWorker* pv = staff.GetMaxSalary();
		pv->PrintWorkerInfo();
		   }
		break;

	case 4: break;

	default: 
		cout << "Wrong action number" << endl;
		break;
	}

	return n;
}