#include "Point.h"


Point::Point()
{
}

Point::Point(size_t x, size_t y)
	:	mX{ x },
		mY{ y }
{
}

size_t Point::getX()
{
	return mX;
}

size_t Point::getY()
{
	return mY;
}

void Point::setX(size_t x)
{
	mX = x;
}

void Point::setY(size_t y)
{
	mY = y;
}