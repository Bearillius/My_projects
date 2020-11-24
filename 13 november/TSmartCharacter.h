#include "Character.h"

class TSmartCharacter: public TCharacter{
	int iq_level;
public:
	TSmartCharacter(int iq_level = 20,	int he = 100,	int pow = 10){}
	void draw(int x, int y, int scale);
	void think();
	int get_iq(){return iq_level;};
};