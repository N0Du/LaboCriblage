// Fichier     eratosthene.h
// Auteur      Noam Dugerdil - Tiago De Oliveira Jorge
// Date        15.11.2022
//
// But         Permet de calculer un tableau de criblage avec une limite,
//             de l'afficher ainsi que de calculer les nombres premiers grâce
//             à celui ci
//
// Remarque
//
// Modifs      Date / Auteur / Raison
//
// Compilateur Bundled MinGW - Version w64 9.0

#ifndef LABO_CRIBLE_ERATOSTHENE_ERATOSTHENE_H
#define LABO_CRIBLE_ERATOSTHENE_ERATOSTHENE_H

#include <vector>

// nom         tableauCriblage
// but         Créer un tableau de criblage jusqu'à une limite
//             donnée
// param       limite       limite jusqu'à laquelle calculer le tableau de criblage
// return      vector<bool> Vecteur contenant le tableau de criblage.
// exception   n/a
std::vector<bool> tableauCriblage(int limite);


// nom         afficherTableauCriblage
// but         Affiche un tableau de criblage
// param       tableau     Tableau à afficher
// return      void
// exception   n/a
void afficherTableauCriblage(const std::vector<bool>& tableau);


// nom         convertirTableau
// but         Calcul les nombres premiers grâce à un tableau
//             de criblage.
// param       tableauCriblage  Le tableau de criblage qui sera reinterpété en nombre premier
// return      vector<int>  Vecteur contenant les chiffres premiers.
// exception   n/a
std::vector<int> convertirTableau (std::vector<bool>& tableauCriblage);


#endif //LABO_CRIBLE_ERATOSTHENE_ERATOSTHENE_H
