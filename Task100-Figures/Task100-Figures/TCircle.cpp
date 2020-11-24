#include "stdafx.h"
#include "TCircle.h"


TCircle::TCircle(void)
{
	radius = 0;
	circleCenter.setX(0);
	circleCenter.setY(0);
}

TCircle::TCircle(int _r, TCoord center) {

	radius = _r;
	circleCenter = center;
}

TCircle::~TCircle(void)
{
}

void TCircle::Draw() {

	cout<<"Drawing circle..."<<endl;

	cout<<"Radious: "<<radius<<endl;
	cout<<"Center coordinates: ("<<circleCenter.getX()<<"; "<<circleCenter.getY()<<") "<<endl;
}