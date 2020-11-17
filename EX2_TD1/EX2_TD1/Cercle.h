#pragma once
#include "Point.h"

class Cercle
{
public:
	Cercle();
	Cercle(double, Point);
	Cercle(const Cercle &);
	void afficher();
	void set_rayon(double r);
	Cercle translate(double);
	double surface();
	double perimetre();
	bool operator==(const Cercle &);
	bool verifier_appartenance(const Point &);
	//~Cercle();

private:
	double rayon;
	Point centre;
};

