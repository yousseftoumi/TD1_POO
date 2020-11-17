// EX3_TD1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Compte.h"

int main()
{
	Compte A(50003, "Ahmed Amine", 8050.175);
	A.consulterSolde();
	A.deposerArgent(12000);
	A.consulterSolde();
	A.retirerArgent(5000);
	A.consulterSolde();
}
