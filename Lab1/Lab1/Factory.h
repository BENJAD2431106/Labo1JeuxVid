#pragma once
#include"Vaisseau.h"
class Factory
{

public :
	static Vaisseau* getRandomVaisseau();
private  :
	static Faction* getRandomFaction();
	static int genererNb(int i, int y);

};

