#include "stdafx.h"
#include "TTriangle.h"
#include "TCircle.h"

TCoord InputCircleCenter() {

	int x, y;
	TCoord circleCenter;

	cout<<"Enter coordinates for circle center: "<<endl;
	cout<<"X: ";
	cin>>x;
	circleCenter.setX(x);

	cout<<"Y: ";
	cin>>y;
	circleCenter.setY(y);

	return circleCenter;
}

TCoord* InputSidesPoints(int sides_qty) {

	int x = 0, y = 0;

	sides = new TCoord*[sides_qty];

	for(int i = 0; i < sides_qty; i++) {

		sides[i] = new TCoord[2];
	}

	for(int i = 0; i < SIDES_QTY; i++) {

		cout<<"Enter first point coordinates: "<<endl;
		cout<<"X: ";
		cin>>x;
		sides[i][0].setX(x);
		cout<<"Y: ";
		cin>>y;
		sides[i][0].setY(y);

		cout<<"Enter second point coordinates: "<<endl;
		cout<<"X: ";
		cin>>x;
		sides[i][1].setX(x);
		cout<<"Y: ";
		cin>>y;
		sides[i][1].setY(y);
	}
	return sides;
}


int _tmain(int argc, _TCHAR* argv[])
{
	int n = 0;
	int radious = 0;
	
	unsigned short int figure_type = 0;
	
	TTriangle triangle(InputSidesPoints(TTriangle::SIDES_QTY));
		triangle.Draw();

	cout<<"Enter circle radious: ";
	cin>>radious;

	TCircle circle(radious, InputCircleCenter());

	circle.Draw();
	
	cout<<"Enter figures quantity: ";
	cin>>n;

	TFigure** arr_object = new TFigure*[n]; 

	for(int i = 0; i < n; i++){
		cout<<"Enter figure type( 1 - circle; 2 - triangle): ";
		cin>>figure_type;

		switch(figure_type){

        case 1:{
			cout<<"Enter circle radius: ";
			cin>>radious;

			arr_object[i] = new TCircle(radious, InputCircleCenter()); 
			break;
			   }

		case 2 :{
			arr_object[i] = new TTriangle(InputSidesPoints(TTriangle::SIDES_QTY));
			break;
				}

		default:
			cout<< "Not correct..."<<endl;
			break;
		}
	}

	for(int i = 0; i < n; i++){
		arr_object[i]->Draw();
	}

	return 0;
}

