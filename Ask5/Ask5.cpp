#include "stdafx.h"
#include "Interface.h"

int main(int key) {

	TStaff staff;

	do {} while (MainMenu(staff, key) != 5);
	
	return 0;
}