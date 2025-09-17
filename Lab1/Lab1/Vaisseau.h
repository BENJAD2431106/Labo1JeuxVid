#pragma once
#include <iostream>
#include <string>
#include "faction.h"
class Vaisseau
{
protected :
		int valMarchande;
		std::string nom;
		int attaque;
		int defense;
		int vie;
		int capacite;
		int niveau;
		int exp;
		int toursRestant = 0;
private :
	Faction* faction;
public :
	Vaisseau(int valMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, Faction* faction);
	Vaisseau(Faction* faction);
	~Vaisseau();
	void EnvoyerEnExploration(int tour);
	void MiseAJourTour();
	int getTours();
	int getAtt();
	int getDef();
	int getVie();


	virtual std::string to_string();
		

};

