//
// Created by Christopher Byatt on 2025-08-01.
//

/*
 * exercice_2.cpp
 *
 *  \brief Affichage d'un triangle isocèle formé d'étoiles
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string c = "*";
    int nbLignes;
    int ligne;
    int colonne;
    int nbEspaces;

    cout << "Combien de lignes ? ";
    cin >> nbLignes;

    for (ligne = 0; ligne < nbLignes; ligne++)
    {
        nbEspaces = nbLignes - ligne - 1;
        for (colonne = 0; colonne < nbEspaces; colonne++)
        {
            cout << " ";
        }
        for (colonne = 0; colonne < 2 * ligne + 1; colonne++)
        {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}