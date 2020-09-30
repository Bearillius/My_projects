// Task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct TWorker {

	char name[30];
	int code;
	float salary;
	};
	

int _tmain(int argc, _TCHAR* argv[])
{
	
	TWorker staff[5];
	
	for (int i=0; i<5; i++){
		cout<<"Enter worker name:";
		cin>>staff[i].name;
		cout<<"Enter worker code:";
		cin>>staff[i].code;
		cout<<"Enter worker salary:";
		cin>>staff[i].salary;
	}
	
	float max_salary = staff[0].salary;
	char name[30] = "\0";
	strcpy_s(name, staff[0].name);
	
	for(int i=1;i<5;i++){
		if(staff[i].salary>max_salary){
			max_salary = staff[i].salary;
			strcpy_s(name, staff[i].name);
		}
	}

	cout<<"Max salary = "<<max_salary<<endl;
	cout<<"Worker name = "<<name<<endl;
		
		
	TWorker worker = {"Ivanov", 4563, 7567.95};
	cout<<"Worker name:"<<worker.name<<endl;
	cout<<"Worker code:"<<worker.code<<endl;
	cout<<"Worker salary:"<<worker.salary<<endl;


	TWorker worker2;
	cout<<"Enter worker name:";
		cin>>worker2.name;
	cout<<"Enter worker code:";
	cin>>worker2.code;
	cout<<"Enter worker salary:";
	cin>>worker2.salary;
		
	


		return 0;
}