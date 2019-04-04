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
	const static int MSIZE = 100;
public:
	Point2D(int x, int y);
	int GetX() const;
	int GetY() const;
	double getF();
	double getH();
	double getG();
	int ManhattanDistance(int board[MSIZE][MSIZE], int i, int j);
	void setH(Point2D target);
	bool operator==(const Point2D& other);
};