#pragma once
#include "Faction.h"
class FactionBleue:public Faction
{
public:
	FactionBleue();
	FactionBleue(int att , int def , int vie, int cap, std::string nom);
	~FactionBleue();
};

