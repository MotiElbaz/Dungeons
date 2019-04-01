#include "Point2D.h"



Point2D::Point2D()
	: x(0)
{
}


Point2D::~Point2D()
{
}


Point2D::Point2D(int x, int y)
{
	this->x = x;
	this->y = y;
}


int Point2D::GetX() const
{
	return x;
}


int Point2D::GetY() const
{
	return y;
}

double Point2D::getF()
{
	return getG() + getH();
}

void Point2D::setH(Point2D target)
{
	h = sqrt(pow(x - target.GetX(), 2) + pow(y - target.GetY(), 2));
}

double Point2D::getH()
{
	return h;
}

double Point2D::getG()
{
	return g;
}

bool Point2D::operator==(const Point2D& other)
{
	return x==other.x && y== other.y;
}
