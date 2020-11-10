#include "stdafx.h"
#include "Staff.h"

void TStaff::Create(){
	 pBegin = new TWorker;
	 pBegin->EnterWorkerInfo();

	 pEnd = pBegin;
}

void TStaff::Add(){
	TWorker* pv = new TWorker;
	pv->EnterWorkerInfo();
	pEnd->pNext = pv;
	pv->pPrev = pEnd;

	pEnd = pv;
}

void TStaff::Insert(int key){
	TWorker* pCurrent = Find(key);
	if(pCurrent){
		if(pCurrent == pEnd){
			Add();
		}
		else
		{
			TWorker* pv = new TWorker;
			pv->EnterWorkerInfo();

			pv->pNext = pCurrent->pNext;
			pv->pPrev = pCurrent;

			(pCurrent -> pNext) ->pPrev = pv;
			pCurrent->pNext = pv;
		}
	}
}

void TStaff::Delete(int key){
	TWorker* pCurrent = Find(key);
	if(pCurrent)
	{
		if(pCurrent == pBegin){
			(pBegin->pNext)->pPrev = NULL;
			pBegin = pBegin->pNext;
				}
		else if(pCurrent == pEnd){
			(pEnd->pPrev)->pNext = NULL;
			pEnd = pEnd->pPrev;
					}
		else {
			(pCurrent->pPrev)->pNext = pCurrent->pNext;
			(pCurrent->pNext)->pPrev = pCurrent->pPrev;
		}
		delete pCurrent;
	}
}

 TWorker* TStaff::Find(int key){
	TWorker* tmp = pBegin;
	while (tmp != NULL && tmp->code != key){
		tmp = tmp->pNext;
	}
	return tmp;
}


 void TStaff::ShowWorkers(){

	 TWorker* pv = pBegin;
	 while(pv){
		 pv->PrintWorkerInfo();
		 pv = pv->pNext;
	 }
 }

 
TWorker* TStaff::GetMaxSalary() {
	int index = 0;
	float max_salary = pBegin->salary;
	TWorker* pv = pBegin;
	TWorker* result = pBegin;

	while (pv){

		if (pv->salary > max_salary) {
			max_salary = pv ->salary;
			result = pv;

			}
		pv = pv->pNext;
	}

	return result;
}
