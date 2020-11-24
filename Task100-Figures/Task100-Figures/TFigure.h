#pragma once

#include "TCoord.h"

class TFigure
{
protected:

	TCoord** sides;

public:

	TFigure(void);
	TFigure(int sides_qty);
	TFigure(TCoord** _sides);
	~TFigure(void);

	virtual void Draw() = 0;
};