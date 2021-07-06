#include "Staff.h"


void TStaff::Create() {
	pBegin = new TWorker;
	pBegin->EnterWorkerInfo();

	pEnd = pBegin;
}

void TStaff::Add() {
	TWorker* pv = new TWorker;
	pv->EnterWorkerInfo();

	pEnd->setPNext(pv);
	pv->setPPrev(pEnd);

	pEnd = pv;
}

void TStaff::Insert(int key) {
	TWorker* pCurrent = Find(key);
	if (pCurrent) {
		if (pCurrent == pEnd) {
			Add();
		}
		else
		{
			TWorker* pv = new TWorker;
			pv->EnterWorkerInfo();

			pv->setPNext(pCurrent->/*get*/pNext);
			pv->setPPrev(pCurrent);

			(pCurrent->/*getP*/pNext)->pPrev = pv;
			pCurrent->/*getP*/pNext = pv;
		}
	}
}

void TStaff::Delete(int key) {
	TWorker* pCurrent = Find(key);
	if (pCurrent)
	{
		if (pCurrent == pBegin) {
			(pBegin->/*getP*/pNext)->setPPrev(NULL);
			pBegin = pBegin->/*getP*/pNext;
		}

		else if (pCurrent == pEnd) {
			(pEnd->/*getP*/pPrev)->setPNext(NULL);
			pEnd = pEnd->/*getP*/pPrev;
		}
		else {
			(pCurrent->/*getP*/pPrev)->/*setP*/pNext = pCurrent->/*setP*/pNext;
			(pCurrent->/*getP*/pNext)->pPrev = pCurrent->/*setP*/pPrev;
		}
		delete pCurrent;
	}
}

int TStaff::EntKey(int key) {

	cout << "Enter the delete worker : " << endl;
	cin >> key;
	return key;
}

TWorker* TStaff::Find(int key) {
	key = EntKey(key);
	TWorker* tmp = pBegin;
	while (tmp != NULL && tmp->getCode() != key) {
		tmp = tmp->/*getP*/pNext;
	}
	return tmp;
}

/*TWorker* TStaff::SumSalary(int key){
	TWorker* pCurrent = Find(key);

}*/

void TStaff::ShowWorkers() {

	TWorker* pv = pBegin;
	while (pv) {
		pv->PrintWorkerInfo();
		pv = pv->/*getP*/pNext;
	}
}


TWorker* TStaff::GetMaxSalary() {
	int index = 0;
	float max_salary = pBegin->getSalary();
	TWorker* pv = pBegin;
	TWorker* result = pBegin;

	while (pv) {

		if (pv->getSalary() > max_salary) {
			max_salary = pv->getSalary();
			result = pv;

		}
		pv = pv->/*getP*/pNext;
	}

	return result;
}
