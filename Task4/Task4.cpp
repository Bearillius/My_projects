// Task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	float x=0.0,y=0.0,x3;

	cout<<"enter x numeral\n";
	cin>>x;

	if (x>=0)
		y = pow( sin( pow(x,2) ),2 );
	else if (x<=-1) 
		y = sqrt( pow(x,2)+1);
	else 
		y = 2*x /abs(x+3);
		cout<<"y = "<<y<<"\n";
	cin>>x3;
	return 0;
}
	

