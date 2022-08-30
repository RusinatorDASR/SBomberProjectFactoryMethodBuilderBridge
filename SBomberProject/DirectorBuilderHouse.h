#pragma once
#include "House.h"
#include "HouseBuilder.h"

class DirectorBuilderHouse
{
public:
	void createHouse(HouseBuilder& houseBuilder) {
		houseBuilder.createDoor();
		houseBuilder.createRoof();
		houseBuilder.createWalls();
		houseBuilder.createWindow();
	}
};

