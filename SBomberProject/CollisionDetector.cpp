#include "CollisionDetector.h"
using namespace std;

void CollisionDetector::CheckPlaneAndLevelGUI(Plane* findPlane_, LevelGUI* findLevelGUI_, bool& exitFlag_) {
	if (findPlane_->GetX() > findLevelGUI_->GetFinishX())
	{
		exitFlag_ = true;
	}
}

void CollisionDetector::DeleteDynamicObj(DynamicObject* pObj, vector<DynamicObject*>& vecDynamicObj_) {
	auto it = (vecDynamicObj_).begin();
	for (; it != (vecDynamicObj_).end(); it++)
	{
		if (*it == pObj)
		{
			(vecDynamicObj_).erase(it);
			break;
		}
	}
}

void CollisionDetector::DeleteStaticObj(GameObject* pObj, vector<GameObject*>& vecStaticObj_) {
	auto it = vecStaticObj_.begin();
	for (; it != vecStaticObj_.end(); it++)
	{
		if (*it == pObj)
		{
			vecStaticObj_.erase(it);
			break;
		}
	}
}

void CollisionDetector::CheckBombsAndGround(const vector<Bomb*>& findAllBombs_, Ground* findGround_, const vector<DestroyableGroundObject*>& findDestoyableGroundObjects_, int16_t& score_, vector<DynamicObject*>& vecDynamicObj_, vector<GameObject*>& vecStaticObj_) {
	vector<Bomb*> vecBombs = findAllBombs_;
	Ground* pGround = findGround_;
	const double y = pGround->GetY();
	for (size_t i = 0; i < vecBombs.size(); i++)
	{
		if (vecBombs[i]->GetY() >= y) // Пересечение бомбы с землей
		{
			pGround->AddCrater(vecBombs[i]->GetX());
			CheckDestoyableObjects(vecBombs[i], findDestoyableGroundObjects_, score_, vecStaticObj_);
			DeleteDynamicObj(vecBombs[i], vecDynamicObj_);
		}
	}
}


void CollisionDetector::CheckDestoyableObjects(Bomb * pBomb, const vector<DestroyableGroundObject*>& findDestoyableGroundObjects_, int16_t& score_, vector<GameObject*>& vecStaticObj_){
	vector<DestroyableGroundObject*> vecDestoyableObjects = findDestoyableGroundObjects_;
	const double size = pBomb->GetWidth();
	const double size_2 = size / 2;
	for (size_t i = 0; i < vecDestoyableObjects.size(); i++)
	{
		const double x1 = pBomb->GetX() - size_2;
		const double x2 = x1 + size;
		if (vecDestoyableObjects[i]->isInside(x1, x2))
		{
			score_ += vecDestoyableObjects[i]->GetScore();
			DeleteStaticObj(vecDestoyableObjects[i], vecStaticObj_);
		}
	}
}


