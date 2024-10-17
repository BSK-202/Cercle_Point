// TP01.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Point.h"
#include "Cercle.h"

using namespace std;

int main()
{
    Point* p1=Point::fabriquer(1,2);
    Cercle* c1 = new Cercle(1, p1, 2);

    c1->afficher();

    delete c1;
    delete p1;

}
