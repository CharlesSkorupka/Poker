#include <iostream>
#include <vector>
#include <stdexcept> // invalid_argument
#include <algorithm> // for_each

#include "card.h"
#include "generTableau.h"
using namespace N;
using namespace std;

void Carte::GenerJeuxCarte(){


    Card *JeuxCarte[52]; //Création d’un tableau de 53 cases pour stocker les cartes sous forme de jeux de carte
    int carte;
    int tmp = 0;


    for(int a = 1; a<5; a++){ //Boucle pour générer chaque signe
        for(int i = 2 ; i < 15; i++){//Boucle pour générer chaque valeur
            tmp = tmp+1; //Compteur

            //Sélectionne le bon signe
            if (a==1){
                carte = 67; //COEUR
            }else if (a==2){
                carte = 75; //CARREAU
            }else if (a==3){
                carte = 80; //PIQUE
            }else if (a==4){
                carte = 84; //TREFLE
            }

            JeuxCarte[tmp]=new Card(carte,i); //Entre les valeurs des cartes dans le tableau
            //cout << *JeuxCarte[tmp] << endl; //affiche le tableau

        }
    }
}
