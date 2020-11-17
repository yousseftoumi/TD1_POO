// EX2_TD1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"
#include "Cercle.h"
using namespace std;

int main()
{
	Point P(5, 5);
	Cercle C1(10, P);
	Cercle C2(12, P);
	C1.afficher();
	C1.set_rayon(12);
	C1.afficher();
	Cercle CTR1 = C1.translate(3);
	CTR1.afficher();
	cout << C1.operator==(C2) << endl;
	cout << C1.operator==(CTR1) << endl;
}

