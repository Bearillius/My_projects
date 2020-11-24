#include "stdafx.h"
#include "TTriangle.h"


void TTriangle::Draw(){

	cout<<"Draw triangle..."<<endl;

	for(int i = 0; i < SIDES_QTY; i++){
		
		cout<<"side "<<i<<": "<<sides[i][0].getX()<<"; "<<sides[i][0].getY()<<") ";
		cout<<" ("<<sides[i][1].getX()<<"; "<<sides[i][1].getY()<<") "<<endl;

	}
}

void TTriangle::InputSidesPoints(){

	int x = 0, y = 0;

	for(int i = 0; i < SIDES_QTY; i++){
		
		cout<<"Enter first coordinates: "<<endl;
		cout<<"X: ";
		cin>>x;
		sides[i][0].setX(x);
		cout<<"Y: ";
		cin>>y;
		sides[i][1].setY(y);

		cout<<"Enter second coordinates: "<<endl;
		cout<<"X: ";
		cin>>x;
		sides[i][1].setX(x);
		cout<<"Y: ";
		cin>>y;
		sides[i][1].setY(y);

	}
}