
class TWorker {
private:

	char name[30];
	float salary;
	int code;

	TWorker* pPrev;
	TWorker* pNext;

	public:
	TWorker();
		
	void EnterWorkerInfo();
	void PrintWorkerInfo();

	void setPNext(TWorker* pointer){pNext = pointer;}
	void setPPrev(TWorker* pointer){pPrev = pointer;}

	TWorker* getPNext(){return pNext;}
	TWorker* getPPrev(){return pPrev;}

	char* getName(){return name;}
	int getCode(){return code;}
	float getSalary(){return salary;}

	void setName(char* value){strcpy(name, value);}
	void setCide(int value){code = value;}
	void setSalary(float value){salary = value;}
};
