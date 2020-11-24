#pragma once

class TCoord
{

private:

	int x, y;

public:
	TCoord(void);
	TCoord(int _x, int _y);

	~TCoord(void);

	void setX(int val) { x = val; }
	void setY(int val) { y = val; }

	int getX() { return x; }
	int getY() { return y; }
};