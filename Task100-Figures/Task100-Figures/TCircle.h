#pragma once

#include "TFigure.h"

class TCircle: public TFigure
{
	int radius;
	TCoord circleCenter;
	
public:
	TCircle(void);
	TCircle(int _r, TCoord center);
	~TCircle(void);
	
	void Draw();
};

