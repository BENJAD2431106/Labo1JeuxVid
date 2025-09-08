#pragma once
#include "Vaisseau.h"
class VaisseauGuerre : public Vaisseau
{
public:
	VaisseauGuerre(Faction* faction);
	VaisseauGuerre(int valMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, Faction* faction);
	~VaisseauGuerre();

	virtual std::string to_string();
};

