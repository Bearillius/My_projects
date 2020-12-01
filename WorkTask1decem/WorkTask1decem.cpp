#include "stdafx.h"

struct TComplex{
	double real;
	double imaginary;
};

istream& operator >> (istream &is, TComplex &c){
	is >> c.real >> c.imaginary;
	return is;
}

ostream& operator << (ostream &os, const TComplex &c){
	os << "(" << c.real << ", " << c.imaginary << ")";
	return os;
}


TComplex& operator + ( TComplex& c1, TComplex& c2){
	TComplex c3;
	c3.real = c1.real + c2.real;
	c3.imaginary = c1.imaginary + c2.imaginary;
		return c3;
}
TComplex& operator - ( TComplex& c1, TComplex& c2){
	TComplex c3;
	c3.real = c1.real - c2.real;
	c3.imaginary = c1.imaginary - c2.imaginary;
		return c3;
}

bool operator == ( TComplex& s1, TComplex& s2){
		return s1.real == s2.real && s1.imaginary == s2.imaginary;
}

bool operator != ( TComplex& s1, TComplex& s2){
		return s1.real != s2.real && s1.imaginary != s2.imaginary;
}

int _tmain(int argc, _TCHAR* argv[])
{
	/*TComplex c1, c2, c3;
	c1.real = 1;
	c2.real = 2;
	c1.imaginary = 2;
	c2.imaginary = 3;
	c3 = c1 + c2;*/

	/*TComplex s1, s2, s3;
	s1.real = 2;
	s2.real = 2;
	s1.imaginary = 2;
	s2.imaginary = 2;

	if (s1 == s2){ cout << "Elements equals..."<< endl;}
	else {
		cout << "Elements not equals..."<< endl;
	}*/

	
	system ("pause");

	return 0;
}

