#include "stdafx.h"
#include <iostream>
using namespace std;

void EnterElements(int x1,int x2){
	cout <<"a = "; 
	cin >>x1;
    cout <<"b = ";
	cin >>x2;
}

void Sum(int x1,int x2,/*int a,int b,*/ int count){
	EnterElements (x1, x2);
	//x1=a;
   // x2=b;
    for (int i=x1; i<=x2; i++){
		if (i%2!=0){
			count++;
		}
	}
	cout<< count<<endl;
	//return count;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x1, x2, count=0;
    
	Sum(x1, x2,count);
	
	system("pause");
	return 0;
}


   
    
    
   
 
  

