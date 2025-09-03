#pragma once
#include <iostream>
class Faction
{
protected :
	int attaque;
	int defense;
	int vie;
	int cap;
	std::string nom;

public :
	Faction();
	Faction(int att, int def, int vie, int cap, std::string nom);
	~Faction();

	
};

