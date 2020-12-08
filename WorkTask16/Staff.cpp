#include "Staff.h"

void TStaff::Create(TWorker& worker) {

	pBegin = new TWorker(worker);
	
	pEnd = pBegin;
}

void TStaff::Add(TWorker& worker) {
	TWorker* pv = new TWorker;
	
	pEnd->setPNext(pv);
	pv->setPPrev(pEnd);

	pEnd = pv;
}

void TStaff::Insert(TWorker& worker, int key) {
	TWorker* pCurrent = Find(key);
	if (pCurrent) {
		if (pCurrent == pEnd) {
			Add(worker);
		}
		else
		{
			TWorker* pv = new TWorker(worker);
			
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

TWorker* TStaff::Find(int key) {
	TWorker* tmp = pBegin;
	while (tmp != NULL && tmp->getCode() != key) {
		tmp = tmp->/*getP*/pNext;
	}
	return tmp;
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

bool TStaff::WorkerCode(int code){
	TWorker* current = this->pBegin;
	bool isPresent = false;

	while(current != NULL){

			if(current -> getCode() == code){

			isPresent = true;
				break;
		}

			current = current->pNext();
	}
	return isPresent;
}