#include "VaisseauTransport.h"
VaisseauTransport::VaisseauTransport(int valMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, Faction faction) : Vaisseau(valMarchande, attaque, defense, vie, capacite, nom, niveau, exp, faction)
{

}
VaisseauTransport::VaisseauTransport(Faction faction) :Vaisseau(faction)
{
	srand(time(NULL));
	this->valMarchande = (rand() % (10 - 0 + 1)) + 0;
	this->attaque = 2;
	this->capacite = 10;
	this->defense = 7;
	this->vie = (rand() % (10 - 0 + 1)) + 0;
	this->niveau = (rand() % (10 - 0 + 1)) + 0;
	this->exp = (rand() % (10 - 0 + 1)) + 0;
	this->nom = "Vaisseau de Guerre";
}
VaisseauTransport::~VaisseauTransport()
{

}
std::string VaisseauTransport::to_string()
{
	std::string msg = Vaisseau::to_string();
	msg += " Ce vaisseau est un vaisseau de transport !";
	return msg;
}