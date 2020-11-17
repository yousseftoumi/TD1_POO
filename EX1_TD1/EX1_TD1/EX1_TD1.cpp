// EX1_TD1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	Complex z1(3, 6);
	Complex z2(5, -3);
	z1.afficher();
	z2.afficher();
	cout << "Le module de z1 est : " << z1.module() << endl;
	Complex somme = z1 + z2;
	somme.afficher();
	cout << "Le module de leur somme est : " << somme.module() << endl;
	Complex difference = z1 - z2;
	difference.afficher();
	cout << "Le module de leur difference est : " << difference.module() << endl;
	Complex produit = z1 * z2;
	produit.afficher();
	cout << "Le module de leur produit est : " << produit.module() << endl;
}
