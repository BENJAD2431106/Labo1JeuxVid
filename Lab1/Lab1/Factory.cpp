#include "Factory.h"
#include "Vaisseau.h"
#include "VaisseauDecouverte.h"
#include "VaisseauGuerre.h"
#include "VaisseauTransport.h"
#include "Faction.h"
#include "FactionRouge.h"
#include "FactionBleue.h"
#include<ctime>
#include<iostream>
#include<random>
using std::endl;
int Factory:: genererNb(int i, int y)
{
	int nbre = std::rand() % y + i;;
	return  nbre;
}
Vaisseau* Factory::getRandomVaisseau()
{
	Vaisseau* vaisseau = nullptr;
	Faction* faction = getRandomFaction();
	int nbre = genererNb(1, 3);
	if (nbre == 1)
	{
		vaisseau = new VaisseauDecouverte(faction);
	}
	else if (nbre == 2)
	{
		vaisseau = new VaisseauGuerre(faction);
	}
	else if(nbre == 3)
		vaisseau = new VaisseauTransport(faction);

	return vaisseau;
}

void Factory::EcrireAffichage()
{
	std::cout << R"(
       _________
      (=========)
      |=========|
      |====_====|
      |== / \ ==|
      |= / _ \ =|
   _  |=| ( ) |=|
  /=\ |=|     |=| /=\
  |=| |=| USA |=| |=|
  |=| |=|  _  |=| |=|
  |=| |=| | | |=| |=|
  |=| |=| | | |=| |=|
  |=| |=| | | |=| |=|
  |=| |/  | |  \| |=|
  |=|/    | |    \|=|
  |=/NASA |_| NASA\=|
  |(_______________)|
  |=| |_|__|__|_| |=|
  |=|   ( ) ( )   |=|
 /===\           /===\
|||||||         |||||||
-------         -------
 (~~~)           (~~~)
    )" << endl;

	std::cout << "Bienvenue au jeu de Jad!" << endl;
	std::cout << "Appuyez pour passer..." << endl;
	getchar();
}
Faction* Factory::getRandomFaction()
{
	Faction* faction=nullptr;
	int nbre = genererNb(1, 2);
	if (nbre == 1)
	{
		faction = new FactionRouge();
	}
	else
		faction = new FactionBleue();

	return faction;
}
