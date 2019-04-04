#pragma once
#include "Point2D.h"
#include <iostream>
using namespace std;

class Figure
{
private:
	int health;
	int ammo;
	Point2D* p;
public:
	Point2D* target;
	int id;
public:
	Figure(Point2D* p,int i);
	Point2D* getPoint();
	void setPoint(Point2D* p);
	void addAmmo(int ammo);
	void removeAmmo(int ammo);
	int getAmmo();
	void addHealth(int health);
	void removeHealth(int health);
	int getHealth();
};
