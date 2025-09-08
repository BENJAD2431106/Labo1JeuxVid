#pragma once
#include "Vaisseau.h"
class VaisseauDecouverte :public Vaisseau
{
	public :
		VaisseauDecouverte(Faction* faction);
		VaisseauDecouverte(int valMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, Faction* faction);
		~VaisseauDecouverte();


		virtual std::string to_string();
};

