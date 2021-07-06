#include "Worker.h"

struct TStaff {

    TWorker*pBegin;
     TWorker*pEnd;

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

}