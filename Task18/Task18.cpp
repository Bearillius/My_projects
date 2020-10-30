
#include "stdafx.h"
#include <iostream>

using namespace std;

struct S {
short i;

};

int _tmain(int argc, _TCHAR* argv[])
{
	S s;
	S& SRef = s;

	s.i	= 3;
	cout<<s.i<<endl;
	cout<<SRef.i<<endl;

	SRef.i = 4;
	cout<<s.i<<endl;
	cout<<SRef.i<<endl;

}

