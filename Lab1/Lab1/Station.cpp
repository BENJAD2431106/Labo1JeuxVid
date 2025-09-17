#include "Station.h"
#include "Vaisseau.h"
#include "Factory.h"
#include "VaisseauDecouverte.h"
#include "VaisseauGuerre.h"
#include "VaisseauTransport.h"
#include <string>

Station::Station()
{
	int platinumDisponible = 5;
	int vieStation = 10;
	vector<Vaisseau*> vecVaisseau ;
	init();
}
vector<Vaisseau*> Station:: getVaisseaudispo()
{
	return vecVaisseau;
}
void Station::init()
{
	for (int i = 0; i < 3; i++)
	{
		vecVaisseau.push_back(Factory::getRandomVaisseau());
	}
}
void Station::ajouterVaisseau(Vaisseau* vaisseau)
{
	vecVaisseau.push_back(vaisseau);
}
Station::~Station()
{
	for (int i = 0; i < vecVaisseau.size(); i++)
	{
		delete vecVaisseau[i];
		vecVaisseau[i] = nullptr;
	}
}
std::string Station::AfficherVaisseaux()
{
	std::string infos;
	for (int i = 0; i < vecVaisseau.size(); i++)
	{
		infos += vecVaisseau[i]->to_string();
	}
	return infos;
}
std::string Station::to_string()
{
	std::string infos;
	infos += " Platinume disponible : " + std::to_string(platinumDisponible) + "\nVie Restante : " + std::to_string(vieStation)+"\n";
	infos += "Nombre de vaisseau Dispo : " + std::to_string(vecVaisseau.size());

	return infos;
}