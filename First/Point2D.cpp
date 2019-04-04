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
	/*int i, j;
	int total = 0;

	for (i = 0; i < MSIZE; i++)
		for (j = 0; j < MSIZE; j++)
			total += ManhattanDistance(board , i, j);

	h = total;*/
	//h = abs(x - target.GetX()) + abs(y - target.GetY());
}

double Point2D::getH()
{
	return h;
}

double Point2D::getG()
{
	return g;
}

int Point2D::ManhattanDistance(int board[MSIZE][MSIZE],int i, int j)
{
	int target_i, target_j;
	if (board[i][j] != 0)
	{
		target_i = (board[i][j] - 1) / MSIZE;
		target_j = (board[i][j] - 1) % MSIZE;
	}
	else // it is 0
	{
		target_i = target_j = MSIZE - 1;
	}
	return abs(i - target_i) + abs(j - target_j);

	return 0;
}

bool Point2D::operator==(const Point2D& other)
{
	return x==other.x && y== other.y;
}
