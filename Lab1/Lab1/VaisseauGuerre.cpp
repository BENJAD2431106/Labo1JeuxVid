#include "VaisseauGuerre.h"
VaisseauGuerre::VaisseauGuerre(int valMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, Faction faction) : Vaisseau(valMarchande, attaque, defense, vie, capacite, nom, niveau, exp, faction)
{

}
VaisseauGuerre::VaisseauGuerre(Faction faction) :Vaisseau(faction)
{
	srand(time(NULL));
	this->valMarchande = (rand() % (10 - 0 + 1)) + 0;
	this->attaque = 10;
	this->capacite = 3;
	this->defense = 10;
	this->vie = (rand() % (10 - 0 + 1)) + 0;
	this->niveau = (rand() % (10 - 0 + 1)) + 0;
	this->exp = (rand() % (10 - 0 + 1)) + 0;
	this->nom = "Vaisseau de Guerre";
}
VaisseauGuerre::~VaisseauGuerre()
{

}
std::string VaisseauGuerre::to_string()
{
	std::string msg = Vaisseau::to_string();
	msg += " Ce vaisseau est un vaisseau de guerre !";
	return msg;
}