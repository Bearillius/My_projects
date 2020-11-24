#pragma once
#include "TFigure.h"

class TCircle: public TFigure
{
int radius;
protected TCoord circleCenter;

public:
	TCircle(void);
	TCircle(int _r,TCoord center);
	~TCircle(void);

	void InputCircleCenter();
	void Draw();

};

