#include "HouseBuilderB.h"

void HouseBuilderB::createRoof() {
	strcpy_s(house->look[0], "  ########  ");
	strcpy_s(house->look[1], "##   ##   ##");
	strcpy_s(house->look[2], "############");
}

void HouseBuilderB::createWindow() {
	house->look[3][0] = '#'; //"#   #       "
	house->look[3][1] = ' ';
	house->look[3][2] = ' ';
	house->look[3][3] = ' ';
	house->look[3][4] = '#';
	house->look[4][0] = '#'; //"#   #       "
	house->look[4][1] = ' ';
	house->look[4][2] = ' ';
	house->look[4][3] = ' ';
	house->look[4][4] = '#';
	house->look[5][0] = '#'; //"#####       "
	house->look[5][1] = '#';
	house->look[5][2] = '#';
	house->look[5][3] = '#';
	house->look[5][4] = '#';
}

void HouseBuilderB::createDoor() {
	house->look[3][5] = '#'; //"#   ###   ##"
	house->look[3][6] = '#';
	house->look[3][7] = ' ';
	house->look[3][8] = ' ';
	house->look[3][9] = ' ';
	house->look[3][10] = '#';
	house->look[3][11] = '#';

	house->look[4][5] = '#'; //"#   ###   ##"
	house->look[4][6] = '#';
	house->look[4][7] = ' ';
	house->look[4][8] = ' ';
	house->look[4][9] = ' ';
	house->look[4][10] = '#';
	house->look[4][11] = '#';

	house->look[5][5] = '#'; //"#######   ##"
	house->look[5][6] = '#';
	house->look[5][7] = ' ';
	house->look[5][8] = ' ';
	house->look[5][9] = ' ';
	house->look[5][10] = '#';
	house->look[5][11] = '#';
}