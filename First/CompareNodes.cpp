#include "CompareNodes.h"

CompareNodes::CompareNodes()
{
}


CompareNodes::~CompareNodes()
{
}


bool CompareNodes::operator ( )(Point2D* b1, Point2D* b2)
{
	return b1->getF()>b2->getF();
}
