#include "HouseBuilderA.h"

void HouseBuilderA::createRoof() {
	strcpy_s(house->look[0], "  ###    ## ");
	strcpy_s(house->look[1], "##   ##  ## ");
	strcpy_s(house->look[2], "############");
}

void HouseBuilderA::createWindow() {
	strcpy_s(house->look[3], "####    ####");
	strcpy_s(house->look[4], "####    ####");
	strcpy_s(house->look[5], "############");

}
