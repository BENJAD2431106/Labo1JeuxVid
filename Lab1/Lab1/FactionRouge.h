#pragma once
#include "Faction.h"
class FactionRouge : public Faction
{
public :
	FactionRouge();
	FactionRouge(int att, int def, int vie, int cap, std::string nom);
	~FactionRouge();
};

