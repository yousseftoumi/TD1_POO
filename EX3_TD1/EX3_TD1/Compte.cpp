#include "Compte.h"

Compte::Compte(int num, string nom, double solde)
{
	this->numCompte = num;
	this->nomProprietaire = nom;
	this->solde = solde;
}

bool Compte::retirerArgent(double mnt)
{
	if (this->solde > mnt) {
		this->solde -= mnt;
		return true;
	}
	else
		return false;
}

void Compte::deposerArgent(double mnt)
{
	this->solde += mnt;
}

void Compte::consulterSolde()
{
	std::cout << "Votre solde actuel est : " << this->solde << " DHs" << std::endl;
}

void Compte::transfererArgent(double mnt,Compte &rec)
{
	if (this->solde > mnt) {
		this->solde -= mnt;
		rec.solde += mnt;
	}
	else {
		std::cout << "Opération refusee : Solde insuffisant " << std::endl;
	}
}
