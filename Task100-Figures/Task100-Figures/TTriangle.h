#pragma once

#include "TFigure.h"

class TTriangle: public TFigure
{
	public:

	static const int SIDES_QTY = 3;

	TTriangle(void): TFigure(SIDES_QTY) {};
	TTriangle(TCoord** sides): TFigure(sides) {};
	~TTriangle(void){};

	void Draw();
	
};

