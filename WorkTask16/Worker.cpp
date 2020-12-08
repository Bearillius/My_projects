#include "Worker.h"

TWorker::TWorker() {

	strcpy_s(name, "\0");
	code = 0;
	salary = 0.0;
	pPrev = NULL;
	pNext = NULL;
}

TWorker::TWorker(char* name, int code, float salary){
	strcpy_s(this->name, name);
	this->code = code;
	this ->salary = salary;
}