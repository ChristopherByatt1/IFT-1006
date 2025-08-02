/// @file Exercice2.cpp
/// @brief 
/// @author Christopher Byatt
/// @date 2025-08-02

#include <iostream>
#include <sstream>


using namespace std;
int main() {

    cout << "Veuillez entrer vos informations" << endl;

    //Demander les infos de l'utilisateur
    string infoUtilisateur;
    char bufferNom[256];
    cin.getline(bufferNom,255);
    infoUtilisateur = bufferNom;


    //Extraire les infos pour le nom et prenom
    istringstream inputStream(infoUtilisateur);

    string prenom;
    inputStream >> prenom;

    string nom;
    inputStream >> nom;


    //Extraire les infos pour la date
    string dateDeNaissance;
    char bufferDate[256];
    inputStream.getline(bufferDate,255);
    dateDeNaissance = bufferDate;

    istringstream inputStreamdate(dateDeNaissance);

    string jour;
    inputStreamdate >> jour;

    string mois;
    inputStreamdate >> mois;

    string annee;
    inputStreamdate >> annee;


    string deuxPremierCaractereDuPrenom = prenom.substr(0,2);
    cout << deuxPremierCaractereDuPrenom << endl;

    string troisPremierCaractereDuNom = nom.substr(0,3);
    cout << troisPremierCaractereDuNom << endl;

    //Concatener les info pour creer le nom d'utilisateur
    string nomUtilisateur = deuxPremierCaractereDuPrenom + troisPremierCaractereDuNom + jour + mois + annee;

    cout << nomUtilisateur;
    return 0;
}