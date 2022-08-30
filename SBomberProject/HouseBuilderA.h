#pragma once
#include <stdio.h>
#include <string>

#include "HouseBuilder.h"
#include "House.h"

class HouseBuilderA :
	public HouseBuilder
{
	House* house;
public:
	HouseBuilderA(House* house_) : house(house_) {}
	void createRoof();
	void createWindow();
};

