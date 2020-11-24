#pragma once
#include "TFigure.h"


class TTriangle: public TFigure
{
	static const int SIDES_QTY = 3;
public:
	TTriangle(void): TFigure(SIDES_QTY){};
	~TTriangle(void);

	void Draw();
	void InputSidesPoints();
};


