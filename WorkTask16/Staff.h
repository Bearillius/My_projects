#include "Worker.h"

struct TStaff {

	TWorker* pBegin;
	TWorker* pEnd;

	TStaff() { pBegin = NULL; pEnd = NULL; }

	~TStaff() {
		if (pBegin != NULL) delete pBegin;
		if (pEnd != NULL) delete pEnd;
	}

	void Create(TWorker& worker);
	void Add(TWorker& worker);
	void Insert(TWorker& worker, int key);
	void Delete(int key);
	bool WorkerCode(int code);

	TWorker* Find(int key);

	TWorker* GetMaxSalary();

	TWorker* getPBegin() { return pBegin; }
	TWorker* getPEnd() { return pEnd; }
};