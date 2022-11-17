// Fichier     eratosthene.cpp
// Auteur      Noam Dugerdil - Tiago De Oliveira Jorge
// Date        15.11.2022
//
// But         Permet de calculer un tableau de criblage avec une limite,
//             de l'afficher ainsi que de calculer les nombres premiers grâce
//             à celui ci
// Remarque
//
// Modifs      Date / Auteur / Raison
//
// Compilateur Bundled MinGW - Version w64 9.0

#include <iostream>
#include <iomanip>

#include "eratosthene.h"

using namespace std;

const int VALEUR_DEPART = 2; // Valeur à partir de laquelle le calcul des nombres premiers commence

// nom         tableauCriblage
// but         Calcul le tableau de criblage
//             d'eratosthene jusqu'à une limite donnée
// param       limite        limite jusqu'à laquelle calculer les chiffres premiers
// return      vector<bool>  Contient le criblage
// exception   n/a
vector<bool> tableauCriblage(int limite){
    vector<bool> tableau (limite - VALEUR_DEPART, true);

    //Calcul du tableau de criblage
    for(int i = 0; i < tableau.size()-1; ++i){
        if(tableau.at(i)){
            int premierNbr = i + 2;
            // Verifie si tout les nombre au dessus de premierNbr sont des multiples de premierNbr
            // Si un nombre est un multiple de premierNbr, la valeur à son index est changée à false.
            for(int y = int(tableau.size())-1; y > i; --y){
                if(tableau.at(y)){
                    int nombreTeste = y + VALEUR_DEPART;
                    if(not(nombreTeste % premierNbr)){
                        tableau.at(y) = false;
                    }
                }
            }
        }
    }

    return tableau;
}

// nom         afficherTableauCriblage
// but         affiche un tableau de criblage donner
// param       tableau   Tableau qui sera afficher par la fonction
// return      void
// exception   n/a
void afficherTableauCriblage(const vector<bool>& tableau){
    const int COL_MAX     = 20; // Maximum de colonnes à afficher
    const int LARGEUR_COL = 2; // Largeur des collones à afficher

    int compteurCol = 0;
    cout << "Tableau de criblage: " << endl;

    for(bool && element : tableau){
        cout << right << setw(LARGEUR_COL);

        if(element){
            cout << "O";
        }else{
            cout << "X";
        }

        ++compteurCol;

        if(compteurCol >= COL_MAX){
            // Retour à la ligne si le nombre max de colonne à été afficher
            cout << endl;
            compteurCol = 0;
        }
    }
    cout << endl;
}

// nom         convertirTableau
// but         Converti un tableau de criblage en une liste des chiffres premiers
// param       tableauCriblage    Tableau qui doit être converti
// return      vector<int>  Vector contenant la liste de tout les chiffres premiers.
// exception   n/a
vector<int> convertirTableau (vector<bool>& tableauCriblage) {
    vector<int> resultat;

    // Si une valeur du tableau de
    for (int i = 0 ; i < tableauCriblage.size(); ++i) {
        if (tableauCriblage[i]) {
            resultat.push_back(i+VALEUR_DEPART);
        }
    }

    return resultat;
}