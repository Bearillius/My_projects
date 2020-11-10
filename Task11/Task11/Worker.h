struct TWorker {
	char name[30];
	int code;
	float salary;
	
	TWorker* pPrev;
	TWorker* pNext;

	TWorker();
		
	void EnterWorkerInfo();
	void PrintWorkerInfo();
};
