#include "Figure.h"

Figure::Figure(Point2D * p ,int id)
{
	this->id = id;
	this->setPoint(p);
	this->target = nullptr;
	health = 0;
	ammo = 0;
}

Point2D * Figure::getPoint()
{
	return this->p;
}

void Figure::setPoint(Point2D * p)
{
	this->p = p;
}

void Figure::addAmmo(int ammo)
{
	this->ammo += ammo;
	if (this->ammo > 30)
	{
		this->ammo = 30;
	}
	cout << "Figure" << this->id << " Ammo : " << this->ammo << endl;
}

void Figure::removeAmmo(int ammo)
{
	this->ammo -= ammo;
	if (this->ammo < 0)
	{
		this->ammo = 0;
	}
}

int Figure::getAmmo()
{
	return ammo;
}

void Figure::addHealth(int health)
{
	this->health += health;
	if (this->health > 100)
	{
		this->health = 100;
	}
	cout << "Figure" << this->id << " Health : " << this->health << endl;
}

void Figure::removeHealth(int health)
{
	this->health -= health;
	if (this->health < 0)
	{
		this->health = 0;
	}
}

int Figure::getHealth()
{
	return health;
}

void Figure::setTarget(Point2D * target, int type)
{
	this->target = target;
	this->type = type;
}
