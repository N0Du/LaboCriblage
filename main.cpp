// Fichier     main.cpp
// Auteur      Noam Dugerdil - Tiago De Oliveira Jorge
// Date        15.11.2022
//
// But         Identifier tous les nombres premiers dans un intervalle
//             saisi par l'utilisateur [2-n].
//             Après la saisie le programme identifie et affiche les
//             nombres premiers. Le programme affiche le tableau cribler
//             permettant de calculer les nombres premiers.
//
// Remarque
//
// Modifs      Date / Auteur / Raison
//
// Compilateur Bundled MinGW - Version w64 9.0

#include "utilitaires.h"
#include "eratosthene.h"

using namespace std;

// nom         main
// but         Demande a l'utilisateur le limite, calul le tableau de cribler et l'affiche.
//             Calcul ensuite les chiffres premiers grâce au tableau et les affiches.
// param       tableau     Tableau à afficher
// return      void
// exception   n/a
int main() {
    // Déclaration variables
    const string MSG_ENTREE = "Bonjour, veuillez entrer un nombre [2 - n] :";
    const string MSG_ERREUR = "Cette entree est incorrecte, veuillez recommencer.\n";
    const int VALEUR_MIN = 2;
    const int VALEUR_MAX = 100;
    int limite = saisie(VALEUR_MIN, VALEUR_MAX, MSG_ENTREE, MSG_ERREUR);

    vector<bool> criblage = tableauCrible(limite);
    afficherTableauCrible(criblage);

    cout << endl;
    cout << "Nombres premiers jusqu'a " << limite << ":" << endl;
    cout << convertirTableauCrible(criblage);

    return EXIT_SUCCESS;
}
