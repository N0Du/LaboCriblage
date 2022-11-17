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


vector<bool> tableauCrible(int limite){
    vector<bool> tableau (limite, true);

    //Calcul du tableau de criblage
    for(int i = 0; i < tableau.size()-1; ++i){
        // 0 et 1 ne doivent pas être tester ni consideré comme nombre premier.
        if(i == 0 || i == 1){
            tableau.at(i) = false;
            continue;
        }

        if(tableau.at(i)){
            // Verifie si tout les nombre au dessus de premierNbr sont des multiples de premierNbr
            // Si un nombre est un multiple de premierNbr, la valeur à son index est changée à false.
            // On commence au dernier index du tableau donc tableau.size()-1
            for(int y = int(tableau.size()) - 1; y > i; --y){
                if(tableau.at(y)){
                    if(not(y % i)){
                        tableau.at(y) = false;
                    }
                }
            }
        }
    }
    return tableau;
}

void afficherTableauCrible(const vector<bool>& tableauCrible){
    const int COL_MAX     = 10; // Maximum de colonnes à afficher
    const int LARGEUR_COL = 2; // Largeur des collones à afficher

    int compteurCol = 0;
    cout << "Tableau crible: " << endl;

    for(bool && element : tableauCrible){
        cout << right << setw(LARGEUR_COL);

        if(element){
            cout << "X";
        }else{
            cout << "O";
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

vector<int> convertirTableauCrible (vector<bool>& tableauCrible) {
    vector<int> resultat;

    for (int i = 0 ; i < tableauCrible.size(); ++i) {
        if (tableauCrible[i]) {
            resultat.push_back(i);
        }
    }

    return resultat;
}