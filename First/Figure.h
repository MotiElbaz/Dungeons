#pragma once
#include "Point2D.h"
class Figure
{
private:
	int health;
	int ammo;
	Point2D* p;
public:
	Figure(Point2D* p);
	Point2D* getPoint();
	void setPoint(Point2D* p);
	void addAmmo(int ammo);
	void removeAmmo(int ammo);
	int getAmmo();
	void addHealth(int health);
	void removeHealth(int health);
	int getHealth();
};
