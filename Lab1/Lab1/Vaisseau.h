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
private :
	Faction* faction;
public :
	Vaisseau(int valMarchande, int attaque, int defense, int vie, int capacite, std::string nom, int niveau, int exp, Faction* faction);
	Vaisseau(Faction* faction);
	~Vaisseau();
	int getAtt();
	int getDef();
	int getVie();


	virtual std::string to_string();
		

};

