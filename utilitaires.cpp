// Fichier     utilitaires.cpp
// Auteur      Noam Dugerdil - Tiago De Oliveira Jorge
// Date        15.11.2022
//
// But         contient une fonction de saisie utilisateur
//             contient permettant d'envoyer un vecteur d'entiers dans l'opérateur de flux <<
//
// Remarque
//
// Modifs      Date / Auteur / Raison
//
// Compilateur Bundled MinGW - Version w64 9.0

#include "utilitaires.h"

// Macro pour vider le buffer
#define CLEAR_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

using namespace std;

int saisie(int min, int max, const string& msgEntree, const string& msgErreur){

    // Déclaration de variables internes
    int saisie;
    bool erreur;

    do {
        // Message et entrée utilisateur
        cout << msgEntree;
        cin >> saisie;

        // Vérification de l'entrée
        erreur = cin.fail() or saisie < min or saisie > max;
        if (erreur) {
            cout << msgErreur;
            cin.clear();
        }
        CLEAR_BUFFER;

    } while (erreur); // Recommencer si une il y a erreur

    return saisie;
}

ostream& operator<< (ostream& os, const vector<int>& vecteur){
    os << "[";
    for(size_t i = 0; i<vecteur.size(); ++i){
        os << vecteur[i];
        if(i+1 != vecteur.size())
            os << ", ";
    }
    os << "]";
    return os;
}