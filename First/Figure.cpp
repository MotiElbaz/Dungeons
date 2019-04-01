#include "Figure.h"

Figure::Figure(Point2D * p)
{
	this->setPoint(p);
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
}

void Figure::removeAmmo(int ammo)
{
	this->ammo -= ammo;
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
}

void Figure::removeHealth(int health)
{
	this->health -= health;
}

int Figure::getHealth()
{
	return health;
}
