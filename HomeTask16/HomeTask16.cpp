#include "Interface.h"

int main() {

	TStaff staff;
	int m = 0;
	int codes[10];
	do {} while (MainMenu(staff, m, &codes[10]) != 6);

	return 0;
}