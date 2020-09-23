// Task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	float a,b,c;
	float D;
	float x1, x2, x3;
	cout<<"enter three numeral\n";
	cin>>a>>b>>c;
	
	D = pow(b,2)-4*a*c;
	if (D<0)
		cout<<"korney net...\n";
	else  
		if (D==0) {
		x1 = -b/(2*a);
		x2=x1;
			}
	else {
		x1 = (-b+pow(D,1/2))/(2*a);
		x2 = (-b-pow(D,1/2))/(2*a);
			}
	cout<<"x1 = "<<x1<<"\n";
	cout<<"x2 = "<<x2<<"\n";
	cin>>x3;
	return 0;
}

