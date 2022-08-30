#pragma once
#include <stdio.h>
#include <string>

#include "HouseBuilder.h"
#include "House.h"

class HouseBuilderB :
	public HouseBuilder
{
	House* house;
public:
	HouseBuilderB(House* house_) : house(house_) {}
	void createRoof();
	void createWindow();
	void createDoor();
};
