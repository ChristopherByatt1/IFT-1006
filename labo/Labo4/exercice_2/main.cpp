///
/// @file main.cpp
/// @brief
/// @author Christopher Byatt
/// @date 08-01-2025
//
// Created by chris on 2025-08-01.
//
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string ligne = "2979403 2 16.99 Câble DVI-D Dual-Link Mâle à Mâle de six Pieds Noir";

    //variable
    int reference;
    int quantite;
    double prix;
    string article;

    istringstream flux(ligne);

    flux >> reference >> quantite >> prix;

    getline(flux, article);

    if (!article.empty() && article[0] == ' ') {
        article.erase(0,1);
    }
    cout << "reference :"<< reference << endl;
    cout << "quantite :"<<  quantite << endl;
    cout << "prix :"<< prix << endl;
    cout << "article :"<<  article << endl;

    return 0;
}