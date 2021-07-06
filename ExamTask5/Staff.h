#include "Worker.h"

struct TStaff {

	TWorker* pBegin;
	TWorker* pEnd;

	TStaff() { pBegin = NULL; pEnd = NULL; }

	~TStaff() {
		if (pBegin != NULL) delete pBegin;
		if (pEnd != NULL) delete pEnd;
	}

	void Create();
	void Add();
	void Insert(int key);
	void Delete(int key);
	int EntKey(int key);
	void ShowWorkers();
	//TWorker* SumSalary(int key);
	TWorker* Find(int key);

	TWorker* GetMaxSalary();

	TWorker* getPBegin() { return pBegin; }
	TWorker* getPEnd() { return pEnd; }
}; 
