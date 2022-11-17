// Fichier     utilitaires.h
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


#ifndef LABO_CRIBLE_ERATOSTHENE_UTILITAIRES_H
#define LABO_CRIBLE_ERATOSTHENE_UTILITAIRES_H

#include <string>
#include <iostream>
#include <limits>
#include <vector>

// nom          saisie
// but          Afficher un message de demande d'entrée utilisateur,
//              selon un maximum et un minimum défini, puis vérifie l'entrée.
//              Si l'entrée n'est pas valide, un message d'erreur défini est affiché puis
//              la saisie de l'utilisateur recommence.
//              Lorsque l'entrée est correcte, la fonction la retourne
//
// param        int min                   paramètre de valeur minimale a entreer par l'utilisateur
// param        int max                   paramètre de valeur maximale a entreer par l'utilisateur
// param        const std::string& msgEntree     message d'entree pour l'utilisateur
// param        const std::string& msgErreur     message d'erreur
// return       saisie(int) de l'utilisateur
// exception    n/a
int saisie(int min, int max, const std::string& msgEntree, const std::string& msgErreur);

// nom          afficherVecteurEntiers
// but          Afficher un vecteur d'entiers
//
// param        const std::vector<int>&           vecteur a passer en paramètre
// return       n/a
void afficherVecteurEntiers(const std::vector<int>& vecteur);

// nom          operator<<
// but          Permet d'envoyer un vecteur à l'opérateur de flux "<<"
//
// param        std::ostream& os                  paramètre de flux
// param        const std::vector<int>& vecteur   vecteur a afficher
// return       n/a
std::ostream& operator<< (std::ostream& os, const std::vector<int>& vecteur);

#endif //LABO_CRIBLE_ERATOSTHENE_UTILITAIRES_H
