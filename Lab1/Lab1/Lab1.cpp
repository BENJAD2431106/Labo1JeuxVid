// Lab1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include <ctime>
#include <string>
#include "Factory.h"
#include "Faction.h"
#include "FactionBleue.h"
#include "FactionRouge.h"
#include "Vaisseau.h"
#include "VaisseauGuerre.h"
#include "VaisseauDecouverte.h"
#include "Vaisseautransport.h"
#include "Station.h"
#include <vector>
#include "conio.h"
using std::cout;
using std::endl;
using std::cin;
using namespace std;
void VoirInfosStation(Station* station)
{
    cout << "INFORMATION DE LA STATION : " << endl;
    std::cout << station->to_string() << endl;
}
void AfficherInfosStation(Station* station)
{
    std::cout << station->AfficherVaisseaux() << endl;
}
void AfficherVaiseauxAVendre(Station* station)
{
    vector<Vaisseau*> monVecteur;
    srand(time(NULL));
    Factory factory;
    Vaisseau* vaisseau = factory.getRandomVaisseau();
    monVecteur.push_back(vaisseau);
    cout << vaisseau->to_string() << endl;
    cout << "Souhaitez-vous l'acheter? (O/N)";
    char rep = _getch();
    if (rep == 'O' || rep == 'o')
    {
        station->ajouterVaisseau(vaisseau);
    }
    else if (rep == 'N' || rep == 'n')
    {
        cout << "vous n'achetezpas ce vaisseau" << endl;
    }
        
}
void EnvoyerEnExploration(Station* station)
{
    srand(time(NULL));
    int nbre = std::rand() % station->getVaisseaudispo().size();
    Vaisseau* v = station->getVaisseaudispo()[nbre];
    if (v->getTours() == 0)
    {
        int nbre2 = std::rand() % 2 + 5;
        int ressources = (std::rand() % 1 + 1000) * nbre2;
        cout << "Vaisseau " + std::to_string(nbre + 1) + " va en exploration pour effectuer " + std::to_string(nbre2) + " Tours..." << endl;
        cout << " Le nombre de ressources trouvees : " + std::to_string(ressources) << endl;
        v->EnvoyerEnExploration(nbre2);
        station->platinumDisponible += ressources;
    }
    else
        cout << "Vaisseau non disponible!"<<endl;
    
}
void InfosVaisseauDispos(Station* station)
{
    for (int i = 0; i < station->getVaisseaudispo().size(); i++)
    {
        int j = 0;
        if (station->getVaisseaudispo()[i]->getTours() == 0)
        {
            cout << station->getVaisseaudispo()[i]->to_string() << endl;
            j++;
        }
    }
}
    
void AfficherMenu()
{
        cout << "\n=== MENU PRINCIPAL ===" << endl;
        cout << "1. Afficher les informations de la station." << endl;
        cout << "2. La liste des vaisseaux." << endl;
        cout << "3. Acheter des vaisseaux." << endl;
        cout << "4. Envoyer un vaisseau pour l'exploration." << endl;
        cout << "5. Passer un tour." << endl;
        cout << "6. Afficher Vaisseaux disponibles uniquement." << endl;
}

int main()
{
    Factory factory;
    factory.EcrireAffichage();
    bool boucle = true;
    int choix = 0;
    int tour=0;
    Station station;
    srand(time(NULL));
    while (boucle)
    {
        cout << "TOUR => " + std::to_string(tour);
        AfficherMenu();
        choix = _getch();
        switch (choix) {
        case '1':
            VoirInfosStation(&station);
            break;

        case '2':
            AfficherInfosStation(&station);
            break;

        case '3':
            AfficherVaiseauxAVendre(&station);
            break;
        case '4':
            EnvoyerEnExploration(&station);
            break;
        case '5':
            cout << " Vous passez au tour suivant." << endl;
            break;
        case '6':
            cout << " Vaisseaux Disponibles :" << endl;
            InfosVaisseauDispos(&station);
            break;

        default:
            cout << "⚠️ Choix invalide. Essayez encore !" << endl;
            break;
        }
        if (boucle) {
            cout << "\nAppuyez sur une touche pour passer au tour suivant...";
            tour++;
            _getch();
            system("cls");
        }
        for (int i = 0; i < station.getVaisseaudispo().size(); i++)
        {
            station.getVaisseaudispo()[i]->MiseAJourTour();
        }
    }
        


    /*Vaisseau* vaisseau = factory.getRandomVaisseau();

    std::cout << " Voici mon vaisseau : " << vaisseau->to_string()<< endl;
    cout << "**********************************************************" << endl;*/

    /*std::cout << "Hello World!\n";
    FactionBleue* factionbleue(4, 9, 100, 10, "Joe");
    FactionRouge* factionrouge(4, 9, 100, 10, "Joe");
    VaisseauDecouverte vaisseau1(factionbleue);
    VaisseauDecouverte vaisseaudecouverte(10, 10, 10, 10, 10, "TestDecouverte", 10,10, factionrouge);
    VaisseauGuerre vaisseau2(factionrouge);
    VaisseauGuerre vaisseauguerre(10, 10, 10, 10, 10, "TestDecouverte", 10,10, factionrouge);
    VaisseauTransport vaisseau3(factionrouge);
    VaisseauTransport vaisseaudetransport(10, 10, 10, 10, 10, "TestDecouverte", 10,10, factionrouge);

    cout <<vaisseaudecouverte.to_string() << endl;
    cout <<vaisseaudetransport.to_string() <<endl ;
    cout <<vaisseauguerre.to_string() <<endl ;

    cout << vaisseau1.to_string() << endl;
    cout << vaisseau2.to_string() << endl;
    cout << vaisseau3.to_string() << endl;*/
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
