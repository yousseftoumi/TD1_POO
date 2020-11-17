// EX4_TD1.cpp : T1 file contains the 'main' function. Program execution begins and ends there.
//

#include "Temps.h"

int main()
{
	char typeAff;
	Temps T1(12,25,14);
	T1.lireHeure();
	cout << "Quel type d'affichage vous preferez ('A' : Anglaise ou 'F' : Francaise). " << endl;
	cin >> typeAff;
	if (typeAff == 'a' || typeAff == 'A')
		T1.afficherHeureAnglaise();
	else if (typeAff == 'f' || typeAff == 'F')
		T1.afficherHeureFrancaise();
	else cout << "Choix invalide" << endl;
	Temps t(13, 25, 30);
	if (T1.inferieur(t)==true)
		cout << "L'heure que vous avez entrez est inferieure a 13:25:30" << endl;
	else
		cout << "L'heure que vous avez entrez est superieure a 13:25:30" << endl;

}
