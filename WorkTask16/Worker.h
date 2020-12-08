#include "stdafx.h"

struct TWorker {

	char name[30];
	int code;
	float salary;

	TWorker* pPrev;
	TWorker* pNext;

	TWorker();
	TWorker(char* name, int code, float salary);

	void setPNext(TWorker* pointer) { pNext = pointer; }
	void setPPrev(TWorker* pointer) { pPrev = pointer; }

	/*TWorker* getPNext() { return pNext; }
	TWorker* getPPrev() { return pPrev; }*/

	char* getName() { return name; }
	int getCode() { return code; }
	float getSalary() { return salary; }

	void setName(char* value) { strcpy_s(name, value); }
	void setCide(int value) { code = value; }
	void setSalary(float value) { salary = value; }
};
