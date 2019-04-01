#pragma once
#include <math.h>
class Point2D
{
public:
	Point2D();
	~Point2D();
private:
	int x;
	int y;
	double g = 0.01;
	double h;
public:
	Point2D(int x, int y);
	int GetX() const;
	int GetY() const;
	double getF();
	double getH();
	double getG();
	void setH(Point2D target);
	bool operator==(const Point2D& other);
};

