#pragma once

#include <stdint.h>

#include "DestroyableGroundObject.h"

class House : public DestroyableGroundObject
{
public:

	bool __fastcall isInside(double x1, double x2) const override;

	inline uint16_t GetScore() const override { return score; }

	void Draw() const override;

	

private:

	friend class HouseBuilderA;

	friend class HouseBuilderB;

	const uint16_t score = 40;

	char look[7][14] = { {"  ########  "},
						 {"##        ##"},
						 {"############"},
						 {"#          #"},
						 {"#          #"},
						 {"############"} };
};

