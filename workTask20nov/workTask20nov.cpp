#include "TTriangle.h"
#include "TCircle.h"


void InputCircleCenter(){
	int x,y;

	cout<<"Enter coordinate for circle center: "<<endl;
	cout<<"X: ";
	cin>>x;
	circleCenter.setX();

	cout<<"Enter coordinate for circle center: "<<endl;
	cout<<"Y: ";
	cin>>y;
	circleCenter.setY();
}


int main(){
	int radious = 0;
	TTriangle triangle;

	triangle.InputSidePoints();
	triangle.Draw();

	cout<<"Enter circle radius: ";
	cin>>radious;

	TCircle circle(, InputCircleCenter());
	circle.Draw();
}

