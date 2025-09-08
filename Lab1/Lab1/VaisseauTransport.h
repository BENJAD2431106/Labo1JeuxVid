#pragma once
#include "Vaisseau.h"
class VaisseauTransport : public Vaisseau
{
public:
	VaisseauTransport(Faction* faction);
	VaisseauTransport(int valMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, Faction* faction);
	~VaisseauTransport();


public :
	virtual std::string to_string();
};

