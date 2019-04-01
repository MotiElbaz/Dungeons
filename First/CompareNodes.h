#pragma once
#include "Point2D.h"
class CompareNodes
{
public:
	CompareNodes();
	~CompareNodes();
	bool operator ( ) (Point2D* b1, Point2D* b2);
};

