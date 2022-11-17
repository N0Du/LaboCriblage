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

// nom         tableauCrible
// but         Créer un tableau criblé jusqu'à une limite
//             donnée
// param       limite       limite jusqu'à laquelle calculer le tableau.
// return      vector<bool> Vecteur contenant le tableau de criblé.
// exception   n/a
std::vector<bool> tableauCrible(int limite);


// nom         afficherTableauCrible
// but         Affiche un tableau criblé donné
// param       tableauCrible     Tableau a afficher
// return      void
// exception   n/a
void afficherTableauCrible(const std::vector<bool>& tableauCrible);


// nom         convertirTableauCrible
// but         Calcul les nombres premiers grâce à un tableau
//             criblé.
// param       tableauCrible  Le tableau criblé qui sera reinterpété en nombre premier
// return      vector<int>  Vecteur contenant les chiffres premiers.
// exception   n/a
std::vector<int> convertirTableauCrible (std::vector<bool>& tableauCrible);

#endif //LABO_CRIBLE_ERATOSTHENE_ERATOSTHENE_H