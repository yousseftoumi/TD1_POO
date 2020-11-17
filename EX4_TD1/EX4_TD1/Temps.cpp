#include "Temps.h"

Temps::Temps()
{
	this->heure = 0;
	this->minute = 0;
	this->seconde = 0;
}

Temps::Temps(int h, int m, int s)
{
	this->heure = h;
	this->minute = m;
	this->seconde = s;
}

void Temps::afficherHeureAnglaise()
{
	if(this->heure ==0)
	cout << "12:" << this->minute << ":" << this->seconde << " am" << endl;
	else if(this->heure>0 && this->heure<12)
	cout << this->heure << ":" << this->minute << ":" << this->seconde << " am" << endl;
	else {
		this->heure -= 12;
		cout << this->heure << ":" << this->minute << ":" << this->seconde << " pm" << endl;
	}

}

void Temps::afficherHeureFrancaise()
{
	cout << this->heure << ":" << this->minute << ":" << this->seconde << endl;
}

bool Temps::inferieur(const Temps &T)
{
	if (this->heure < T.heure)
		return true;
	else if(this->heure == T.heure){
		if (this->minute < T.minute)
			return true;
		else if (this->minute == T.minute) {
			if (this->seconde <= T.seconde)
				return true;
			else
				return false;
		}
		else 
			return false;
	}
	else 
		return false;
}

void Temps::lireHeure()
{
	cout << "Entrez l'heure : " << endl;
	cin >> this->heure;
	cout << "Entrez les minutes : " << endl;
	cin >> this->minute;
	cout << "Entrez les secondes : " << endl;
	cin >> this->seconde;
}
