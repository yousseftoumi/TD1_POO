#include "Point.h"
#include <iostream>

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point &P)
{
	this->x = P.x;
	this->y = P.y;
}

void Point::afficher()
{
	std::cout << "x = " << this->x << ", y = " << this->y << std::endl;
}

Point Point::translate(double tr)
{
	Point P;
	P.x = this->x + tr;
	P.y = this->y + tr;
	return P;
}

bool Point::operator==(const Point &P)
{
	return (this->x == P.x && this->y == P.y);
}

//Point::~Point()
//{
//	delete this;
//}
