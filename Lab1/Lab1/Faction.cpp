#include "Faction.h"

Faction::Faction()
{
	//default apres
}
Faction::Faction(int att, int def, int vie, int cap, std::string nom)
{
	this->attaque = att;
	this->defense = def;
	this->vie = vie;
	this->cap = cap;
	this->nom = nom;
}
Faction::~Faction()
{

}
