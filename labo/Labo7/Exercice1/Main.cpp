/// @file Main.cpp
/// @brief 
/// @author Christopher Byatt
/// @date 2025-08-02

#include <iostream>
using namespace std;

int main () {
    const int  NOMBRES_TOTAL_ETUDIANTS = 10;
    constexpr int SEUIL_NIVEAU_EXAMEN = NOMBRES_TOTAL_ETUDIANTS * 0.8;
    int succes = 0, echecs = 0, compteurEtudiants = 0, resulat;

    do {
        cout << "Entrer un resultat (1 = reussite, 0 = echec)" << endl;
        cin >> resulat;

        if (resulat == 1) {
            succes++;
        } else {
            echecs++;
        }
        compteurEtudiants++;
    }
    while (compteurEtudiants < NOMBRES_TOTAL_ETUDIANTS);

    cout << "Succès " << succes << endl;
    cout << "Echecs " << echecs << endl;

    if ( succes > SEUIL_NIVEAU_EXAMEN )
    {
        cout << "Relever le niveau de l'examen " << endl;
    }

    return 0;
}