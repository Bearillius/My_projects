#include "stdafx.h"
#include "TSmartCharacter.h"

int _tmain(int argc, _TCHAR* argv[])
{
	TSmartCharacter SmartCharachter;
	SmartCharachter.draw(10, 2, 15);
	TCharacter character;
	TCharacter* character2 = new TCharacter(20,50);

	cout <<  character.get_health()<<endl;
	cout <<  character.get_power()<<endl;

	cout << character2->get_health()<<endl;
	cout << character2->get_power()<<endl;
}