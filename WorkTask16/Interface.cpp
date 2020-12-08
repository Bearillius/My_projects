#include "Interface.h"

TWorker EnterWorkerInfo() {
	char name[10] = "\0";
	int code = 0;
	float salary = 0.0;

	cout << "Enter worker code: ";
	cin >> code;
	cout << "Enter worker name: ";
	cin >> name;
	cout << "Enter worker salary: ";
	cin >> salary;

	return TWorker(name, code, salary);
}
		
void PrintWorkerInfo(const TWorker& worker) {

	cout << "Name: " << worker.getName()<< endl;
	cout << '\n';
	cout << "Code: " << worker.getCode()<< endl;
	cout << '\n';
	cout << "Salary: " <<worker.getSalary << endl;
	cout << '\n';
}

void ShowWorkers(TStaff& staff) {

	TWorker* pv = staff.getPBegin;
	while (pv) {
		
		PrintWorkerInfo(*pv);
		pv = pv->/*getP*/pNext;
	}
}

int MainMenu(TStaff& staff) {

	int n = 0;
	int key;

	cout << "1 - Add workers" << endl;
	cout << "2 - Show workers" << endl;
	cout << "3 - Get max salary" << endl;
	cout << "4 - Delete worker" << endl;
	cout << "5 - Insert worker" << endl;
	cout << "6 - Exit" << endl;

	cin >> n;

	switch (n)
	{
	case 1: {
		
			TWorker worker = EnterWorkerInfo();
	       	if(staff.pBegin(worker)){

				if(!staff.WorkerCode(worker.getCode())){
					 staff.Add(worker);
				}
				else {
					cout << "Worker with code"<<worker.getCode()<<" already exist!"<< endl;
				}
			}
				else 
				{  staff.Create(worker); 
				break;
						}
			}
			break;
		
	case 2: ShowWorkers(staff); break;

	case 3: {
		cout << "Worker with MAX salary is: " << endl;
		TWorker* pv = staff.GetMaxSalary();
		PrintWorkerInfo(*pv);
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
		staff.Insert(worker, key); break;

	case 6: break;
	
	default:
		cout << "Wrong action number" << endl;
		break;
	}
	return n;
}