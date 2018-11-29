#include "Point.h"

Point::Point()
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