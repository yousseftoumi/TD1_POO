#pragma once
#include<iostream>
using namespace std;

class Temps
{
public:
	Temps();
	Temps(int,int,int);
	void afficherHeureAnglaise();
	void afficherHeureFrancaise();
	bool inferieur(const Temps &);
	void lireHeure();


private:
	int heure;
	int minute;
	int seconde;
};
