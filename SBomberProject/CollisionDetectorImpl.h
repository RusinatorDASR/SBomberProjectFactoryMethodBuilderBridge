#pragma once
#include "Bomb.h"
#include "Plane.h"
#include "LevelGUI.h"
#include "Ground.h"
#include "DestroyableGroundObject.h"

using namespace std;

class CollisionDetectorImpl
{
public:
	virtual void CheckPlaneAndLevelGUI(Plane* findPlane_, LevelGUI* findLevelGUI_, bool& exitFlag_) {}
	virtual void CheckBombsAndGround(const vector<Bomb*>& findAllBombs_, Ground* findGround_, const vector<DestroyableGroundObject*>& findDestoyableGroundObjects_, int16_t& score_, vector<DynamicObject*>& vecDynamicObj_, vector<GameObject*>& vecStaticObj_) {}
	virtual void CheckDestoyableObjects(Bomb * pBomb, const vector<DestroyableGroundObject*>& findDestoyableGroundObjects_, int16_t& score_, vector<GameObject*>& vecStaticObj_) {}
};

