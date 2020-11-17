#pragma once

class Point 
{
private:
	double x;
	double y;
public:
	Point();
	Point(double, double);
	Point(const Point &);
	void afficher();
	Point translate(double);
	bool operator==(const Point&);
	//~Point();
};