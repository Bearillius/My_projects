#include "Worker.h"

class TStaff {
private:
     TWorker*pBegin;
     TWorker*pEnd;

public:
	TStaff(){pBegin = NULL; pEnd = NULL;}

	 ~TStaff(){
		 if(pBegin != NULL) delete pBegin;
		 if(pEnd != NULL) delete pEnd;
	 }

	void Create();
	void Add();
	void Insert(int key);
	void Delete (int key);
	void ShowWorkers();

	TWorker* Find(int key); 

	TWorker* GetMaxSalary();

	TWorker* getPBegin() {return pBegin;}
	TWorker* getPEnd() {return pEnd;}
}