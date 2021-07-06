#include "Interface.h"

int MainMenu(TStaff& staff, int m, int codes[10]) {

	int n = 0, found = 0, i = 0;
	int key;
	int cods;
	

	cout << "1 - Add workers" << endl;
	cout << "2 - Show workers" << endl;
	cout << "3 - Get max salary" << endl;
	cout << "4 - Delete worker" << endl;
	cout << "5 - Insert worker" << endl;
	cout << "6 - Exit" << endl;

	cin >> n;

	switch (n)
	{
	case 1: 
		
		cout << "Enter worker code: " << endl;
		cin >> cods;
		while (i < 10) {
			if (cods == codes[i]) {
				found++;
			}
			i++;
		}

		if (found == 0) {
			cods = codes[m];
			m++;
			cout << "There is no such worker, please enter: ";
			staff.pBegin ? staff.Add() : staff.Create(); break;
		}
		else {
				cout << "Code is busy" << endl;
				break;
			}
		
	case 2: staff.ShowWorkers(); break;

	case 3: {
		cout << "Worker with MAX salary is: " << endl;
		TWorker* pv = staff.GetMaxSalary();
		pv->PrintWorkerInfo();
		cout << '\n';
	}
		  break;
	
	case 4:
		cout << "Enter the delete worker : " << endl;
		cin >> key;
		cout << '\n';
		staff.Delete(key); break;
	
	case 5:
	    cout << "The element after which to insert: " << endl;
		cin >> key;
		cout << '\n';
		staff.Insert(key); break;

	case 6: break;
	
	default:
		cout << "Wrong action number" << endl;
		break;
	}
	return m;
	return codes[10];
	return n;
}