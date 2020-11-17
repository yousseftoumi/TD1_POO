#include "Cercle.h"
#include <iostream>
#include <cmath>
#define pi 3.14

Cercle::Cercle()
{
	this->rayon = 0;
	Point();
}

Cercle::Cercle(double r, Point P)
{
	this->rayon = r;
	this->centre = P;
}

Cercle::Cercle(const Cercle &C)
{
	this->rayon = C.rayon;
	this->centre = C.centre;
}

void Cercle::afficher()
{
	std::cout << "Le rayon : " << this->rayon << " et le centre a comme cordonnees : " << std::endl;
	this->centre.afficher();
}

void Cercle::set_rayon(double r)
{
	this->rayon = r;
}

Cercle Cercle::translate(double tr)
{
	Cercle ctr;
	ctr.rayon = this->rayon;
	ctr.centre = this->centre.translate(tr);
	return ctr;
}

double Cercle::surface()
{
	return pi * pow(this->rayon, 2);
}

double Cercle::perimetre()
{
	return 2 * pi*this->rayon;
}

bool Cercle::operator==(const Cercle &C)
{
	return (this->rayon == C.rayon && this->centre == C.centre);
}

bool Cercle::verifier_appartenance(const Point &P)
{
	Point res = this->centre.translate(P.x);
	if(P.x == this->centre.x + this->rayon && P.y == this->centre.y + this->rayon)
	
}

//Cercle::~Cercle()
//{
//	delete this;
//}
