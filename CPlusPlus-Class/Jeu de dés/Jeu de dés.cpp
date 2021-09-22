// Jeu de dés.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int somme(int valeur1, int valeur2)
{
    return valeur1 + valeur2;
}

int main()
{
        // Initialize random seed
        srand(time(NULL));

        int scoreCourant;
        int scorePrecedent;

        bool continuer = true;

        int mise = 5;

        // Je tire 30 fois les dés
         for (size_t i = 0; i < 30 ; i++)
        { 

        // Un tirage
         int tirageDe1 = 1 + (rand() % 6);
         int tirageDe2 = 1 + (rand() % 6);
         scoreCourant = somme(tirageDe1, tirageDe2);

        // Affichage du tirage
         std::cout << "Tirage = " << tirageDe1 << ":" << tirageDe2 << std::endl;
         std::cout << "Score courant : " << scoreCourant << std::endl;
         std::cout << "Score precedent : " << scorePrecedent << std::endl;

         // Determiner si j'ai gagné ou perdu

         if (scoreCourant > scorePrecedent)
         {
             char reponse;
             std::cout << "Voulez vous rejouer en doublant ou repartir avec vos gains (o/n) ?" << std::endl;
             std::cin >> reponse;

             char reponse;
             std::cout << "Votre wallet contient" << wallet << "CHF" << std::endl;
             std::cout << "Voulez vous rejouer en double la partie";
             std::cout << reponse;

             if (reponse == 'o')
             {
                 //On a décidé de doubler et rejouer
                 wallet *= 2;
                 continuer = true;
             }
             else if (reponse == 'n')
             {
                 continuer = false;
             }
             else
             {
                 //.......................
                 // A traiter plus tard
             }

         }
         else 
         {
             std::cout << "Perdu :(" << std::endl;
             // On perd donc on sort du jeu
             continuer = false;
         }
         
         }while (continuer);

}

