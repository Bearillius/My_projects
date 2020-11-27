#include "stdafx.h"
#include <sstream>
#include <string>
#include <ctime>
#include <fstream>
#include <iostream>
using namespace std;

string message(int i){
	char buf[26];
	ostringstream os;
	time_t t;
	time(&t);
	os << " time: " << ctime_s(buf, 26, &t) << " number: " << i << endl;
	return os.str();
}

int _tmain(int argc, _TCHAR* argv[]){

const int i = 5;
cout<<message(i);

char file_name[81];
cout<<"Enter name files: ";
cin>>file_name;

ifstream f(file_name, ios::in|ios::_Nocreate);

if(!f){
	cout<<"Error open files...";
	return 1;
}
char buf [81];
while(!f.eof()){
	f.getline(buf, 81);
	cout<<buf<<endl;
}
f.close();

cout<<"Enter name files: ";
cin>>file_name;
ofstream fout(file_name, ios::out);

if(!fout){
	cout<<"Error open files...";
	return 1;
}

while(!f.eof()){
	f.getline(buf, 81);
	fout<<buf;
}
fout.close();


return 0;
}

