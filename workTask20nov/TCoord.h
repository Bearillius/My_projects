#include "stdafx.h"

class TCoord{
	int x, y;
public:
	TCoord(void);
	TCoord(int _x, int _y);

		~TCoord(void);

	void setX(int val) {x = val;};
	void setY(int val) {y = val;};

	int getX(int val) {return x;}
	int getY(int val) {return y;}
};
