#pragma once
#include <vector>

#include "CollisionDetectorImpl.h"


using namespace std;
class CollisionDetector :
	public CollisionDetectorImpl
{
public:
	void CheckPlaneAndLevelGUI(Plane* findPlane_, LevelGUI* findLevelGUI_, bool& exitFlag_);
	void DeleteDynamicObj(DynamicObject* pObj, vector<DynamicObject*>& vecDynamicObj_);
	void DeleteStaticObj(GameObject* pObj, vector<GameObject*>& vecStaticObj_);
	void CheckBombsAndGround(const vector<Bomb*>& findAllBombs_, Ground* findGround_, const vector<DestroyableGroundObject*>& findDestoyableGroundObjects_, int16_t& score_, vector<DynamicObject*>& vecDynamicObj_, vector<GameObject*>& vecStaticObj_);
	void CheckDestoyableObjects(Bomb * pBomb, const vector<DestroyableGroundObject*>& findDestoyableGroundObjects_, int16_t& score_, vector<GameObject*>& vecStaticObj_);
private:
	//int16_t& score_;
	//bool& exitFlag_;
	//Plane* findPlane_;
	//LevelGUI* findLevelGUI_;
	//Ground* findGround_;
	//vector<Bomb*>& findAllBombs_;
	//vector<DynamicObject*>& vecDynamicObj_;
	//vector<DestroyableGroundObject*>& findDestoyableGroundObjects_;
	//vector<GameObject*>& vecStaticObj_;
};

