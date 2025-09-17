#pragma once
#include <vector>
#include <iostream>
#include"vaisseau.h"
using std::vector;

class Station
{
public:
	int platinumDisponible;
	int vieStation;
	vector<Vaisseau*> vecVaisseau;
public :
	Station();
	~Station();
	std::string AfficherVaisseaux();
	vector<Vaisseau*> getVaisseaudispo();
	void init();
	void ajouterVaisseau(Vaisseau* vaisseau);

virtual std::string to_string();
};

