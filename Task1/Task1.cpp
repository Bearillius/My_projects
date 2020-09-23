// Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int num1;
	int num2;
	int num3;
	char Sign = '/0';
	int Result;
	cin>>num1>>num2>>Sign;
	switch (Sign)
	{
	  case'+':
		Result = num1 + num2; break;
	  case'-':
		Result = num1 - num2; break;
	  case'*':
		Result = num1 * num2; break;
	  case'/':
		Result = num1 / num2; break;
      default: cout<<"Не верный знак";
	}

	cout<<Result;		
	cin>>num3;
	return 0;
}
