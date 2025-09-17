#pragma once
#include"Vaisseau.h"
class Factory
{

public :
	static Vaisseau* getRandomVaisseau();
	void  EcrireAffichage();
private  :
	static Faction* getRandomFaction();
	static int genererNb(int i, int y);

};

