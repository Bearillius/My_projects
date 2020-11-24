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

	pEnd->setPNext(pv);
	pv->setPPrev(pEnd);

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

			pv->setPNext(pCurrent->getPNext);
			pv->setPPrev(pCurrent);

			(pCurrent -> getPNext) ->pPrev(pv);
			pCurrent->getPNext = pv;
		}
	}
}

void TStaff::Delete(int key){
	TWorker* pCurrent = Find(key);
	if(pCurrent)
	{
		if(pCurrent == pBegin){
			(pBegin->getPNext())->setPPrev(NULL);
			pBegin = pBegin->getPNext();
				}

		else if(pCurrent == pEnd){
			(pEnd->getPPrev())->setPNext = NULL;
			pEnd = pEnd->getPPrev();
					}
		else {
			(pCurrent->getPPrev())->setPNext = pCurrent->setPNext;
			(pCurrent->getPNext)->pPrev = pCurrent->setPPrev;
		}
		delete pCurrent;
	}
}

 TWorker* TStaff::Find(int key){
	TWorker* tmp = pBegin;
	while (tmp != NULL && tmp->getCode != key){
		tmp = tmp->getPNext;
	}
	return tmp;
}


 void TStaff::ShowWorkers(){

	 TWorker* pv = pBegin;
	 while(pv){
		 pv->PrintWorkerInfo();
		 pv = pv->getPNext;
	 }
 }

 
TWorker* TStaff::GetMaxSalary() {
	int index = 0;
	float max_salary = pBegin->getSalary;
	TWorker* pv = pBegin;
	TWorker* result = pBegin;

	while (pv){

		if (pv->getSalary > max_salary) {
			max_salary = pv ->getSalary;
			result = pv;

			}
		pv = pv->getPNext;
	}

	return result;
}
