// Formative OOP - Créer un verger.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
// a)

#include <iostream>
#include <string>

class Fruits
{
public:             // Access specifier
    int quantité;        // Attribut (int variable)
    std::string type;  // Attribut (string variable)
    std::string poids;
};

int main()
{
    // Create an object of Fruits
    Fruits fruitsObj1;
    fruitsObj1.type = "Pomme";
    fruitsObj1.quantité = 0;
    fruitsObj1.poids = 150 // grammes

    // Create a second object of Fruits
        Fruits fruitsObj2;
    fruitsObj2.type = "Poire";
    fruitsObj2.quantité = 0;
    fruitsObj2.poids = 90 // grammes

    // Create a third object of Fruits
        Fruits fruitsObj3;
    fruitsObj3.type = "Cerise";
    fruitsObj3.quantité = 0;
    fruitsObj3.poids = 5 // grammes

    // c)...


        return 0;
}

// b)

/* Calculs:

1 pommier : 600*150g   = 90kg
1 poirier : 250*90g    = 22.5kg
1 cerisier : 60'000*5g = 300kg

2000/90   = 22.22 pommiers
2000/22.5 = 88.88 poiriers
2000/300  = 6.66 cerisiers
*/


