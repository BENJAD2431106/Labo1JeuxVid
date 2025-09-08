#include "VaisseauDecouverte.h"
#include <iostream>
#include <ctime>

VaisseauDecouverte::VaisseauDecouverte(int valMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, Faction* faction) : Vaisseau(valMarchande,  attaque, defense,  vie, capacite,  nom, niveau,exp, faction)
{
	
}
VaisseauDecouverte::VaisseauDecouverte(Faction* faction) :Vaisseau(faction)
{
	this->valMarchande = (rand() % (10 - 0 + 1)) + 0;
	this->attaque = 3;
	this->capacite = 10;
	this->defense = 3;
	this->vie= (rand() % (10 - 0 + 1)) +0;
	this->niveau = (rand() % (10 - 0 + 1)) + 0;
	this->exp = (rand() % (10 - 0 + 1)) + 0;
	this->nom = "Vaisseau de découverte";
}
VaisseauDecouverte::~VaisseauDecouverte()
{
	
}
std::string VaisseauDecouverte::to_string()
{
	std::string msg = Vaisseau::to_string();
	msg += " Ce vaisseau est un vaisseau de decouverte et d'exploration!";
	return msg;
}