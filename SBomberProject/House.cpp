
#include <iostream>

#include "House.h"
#include "ScreenSingleton.h"

using namespace std;

bool House::isInside(double x1, double x2) const
{
	const double XBeg = x + 2;
	const double XEnd = x + width - 1;

	if (x1 < XBeg && x2 > XEnd)
	{
		return true;
	}

	if (x1 > XBeg && x1 < XEnd)
	{
		return true;
	}

	if (x2 > XBeg && x2 < XEnd)
	{
		return true;
	}

	return false;
}

void House::Draw() const
{
	ScreenSingleton::getInstance().SetColor(CC_Yellow);
	ScreenSingleton::getInstance().GotoXY(x, y - 5);
	cout << look[0];
	ScreenSingleton::getInstance().GotoXY(x, y - 4);
	cout << look[1];
	ScreenSingleton::getInstance().GotoXY(x, y - 3);
	cout << look[2];
	ScreenSingleton::getInstance().GotoXY(x, y - 2);
	cout << look[3];
	ScreenSingleton::getInstance().GotoXY(x, y - 1);
	cout << look[4];
	ScreenSingleton::getInstance().GotoXY(x, y);
	cout << look[5];
}