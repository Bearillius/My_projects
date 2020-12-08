#include "stdafx.h"
#include "Interface.h"

int MainMenu(TStaff& staff, int key) {

	int n = 0;

	cout << "1 - Add workers" << endl;
	cout << "2 - Show workers" << endl;
	cout << "3 - Get max salary" << endl;
	cout << "4 - Delete worker" << endl;
	cout << "5 - Exit" << endl;

	cin >> n;

	switch (n)
	{
	case 1: staff.pBegin ? staff.Add() : staff.Create(); break;

	case 2: staff.ShowWorkers(); break;

	case 3: {
		cout << "Worker with MAX salary is: " << endl;
		TWorker* pv = staff.GetMaxSalary();
		pv->PrintWorkerInfo();
	}
		  break;
	
	case 4:
		staff.Delete(key); break;

	case 5: break;
	
	default:
		cout << "Wrong action number" << endl;
		break;
	}

	return n;
}