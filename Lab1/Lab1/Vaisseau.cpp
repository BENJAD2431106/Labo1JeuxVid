#include "Vaisseau.h"

Vaisseau::Vaisseau(int valMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, Faction faction)
{
	this->valMarchande = valMarchande;
	this->attaque = attaque;
	this->capacite = capacite;
	this->defense = defense;
	this->vie = vie;
	this->niveau = niveau;
	this->nom = nom;
	this->exp = exp;
	this->faction = faction;


}
Vaisseau::Vaisseau(Faction f)
{
	this->faction = f;
	//random pour plus tard.
}
Vaisseau::~Vaisseau()
{

}
int Vaisseau::getAtt()
{
	return attaque;
}
int Vaisseau::getDef()
{
	return defense;
}
int Vaisseau::getVie()
{
	return vie;
}

std::string Vaisseau::to_string()
{
	std::string infos;
	infos += "Vaisseau " + nom + "\n Capacite : " + std::to_string(capacite) +
		"\n attaque : " + std::to_string(attaque) +
		" \n Defense : " + std::to_string(defense) +
		" \n niveau : " + std::to_string(niveau);
	return infos;
}

