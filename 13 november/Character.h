class TCharacter{
int health, power;
public:
	TCharacter(int he = 100, int pow = 10){
		health = he; power = pow;
	}
	void draw(int x, int y, int scale, int position);
	int get_health();
	int get_power();
};
