#include "Point.h"
#include <math.h>

int Point::getX() const {
	return x;
}

int Point::getY() const {
	return y;
}

void Point::setX(int value) {
	x = value;
}

void Point::setY(int value) {
	y = value;
}

Point Point::operator+=(const Point & p)
{
	x += p.x;
	y += p.y;
	return *this;
}

Point Point::operator+(Point & p) const
{
	Point newPoint = *this;
	newPoint += p;
	return newPoint;
}

Point Point::operator-=(const Point & p)
{
	return *this += -p;
}

Point Point::operator-(Point & p) const
{
	return (*this) + (-p);
}

float Point::dot(Point & p)
{
	return 0.0f;
}

Point Point::cross(Point & p) const
{
	Point newPoint(0, 0);


	return Point();
}



