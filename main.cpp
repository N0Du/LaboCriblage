// Fichier     main.cpp
// Auteur      Noam Dugerdil - Tiago De Oliveira Jorge
// Date        15.11.2022
//
// But         Identifier tous les nombres premiers dans un intervalle
//             saisi par l'utilisateur [2-n].
//             Après la saisie le programme identifie et affiche les
//             nombres premiers. Le programme affiche avant et après
//             le crible, l'état du tableau.
//
// Remarque
//
// Modifs      Date / Auteur / Raison
//
// Compilateur Bundled MinGW - Version w64 9.0


#include "utilitaires.h"
#include "eratosthene.h"

using namespace std;

// Permet d'afficher un vecteur d'entier ainsi:  cout << vecteur



int main() {

    // Déclaration variables
    const string MSG_ENTREE = "Bonjour, veuillez entrer un nombre [2 - n] :";
    const string MSG_ERREUR = "Cette entree est incorrecte, veuillez recommencer.\n";
    const int VALEUR_MIN = 2;
    const int VALEUR_MAX = 100;
    int limite = saisie(VALEUR_MIN, VALEUR_MAX, MSG_ENTREE, MSG_ERREUR);

    vector<bool> criblage = tableauCriblage(limite);
    afficherTableauCriblage(criblage);

    cout << endl;
    cout << "Chiffres premiers jusqu'a : " << limite << "." << endl;
    vector<int> nbrePremiers = convertirTableau(criblage);
    cout << nbrePremiers;

    return EXIT_SUCCESS;
}
