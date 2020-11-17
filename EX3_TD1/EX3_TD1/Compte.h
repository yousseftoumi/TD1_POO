#pragma once
#include <iostream>
#include <string>
using namespace std;

class Compte
{

public :
	Compte(int,string, double);
	bool retirerArgent(double);
	void deposerArgent(double);
	void consulterSolde();
	void transfererArgent(double,Compte &);


private:
	int numCompte;
	string nomProprietaire;
	double solde;

};