#include "stdafx.h"
#include "TTriangle.h"

void TTriangle::Draw() {

	cout<<"Draw triangle..."<<endl;

	for(int i = 0; i < SIDES_QTY; i++) {
	
		cout<<"side "<<(i + 1)<<":"; 
		cout<<" ("<<sides[i][0].getX()<<"; "<<sides[i][0].getY()<<") ";
		cout<<" ("<<sides[i][1].getX()<<"; "<<sides[i][1].getY()<<") "<<endl;
	}
}

