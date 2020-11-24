#include "TCoord.h"

class TFigure{

	protected TCoord** sides;

public:
	TFigure(void);
	TFigure(int sides_qty);
	~TFigure(void);

	virtual void Draw ()= 0;
};
