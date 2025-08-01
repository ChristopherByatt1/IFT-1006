//
// Created by chris on 2025-08-01.
//

/*
* On veut afficher les éléments de la matrice 5x3 définie par
array<array<int,3>,5> matrice = {{
{1 , 2 , 3 } ,
{4 , 5 , 6 } ,
{7 , 8 , 9 } ,
{10 , 11 , 12 } ,
{13 , 14 , 15 }}};
for(int i=0; i<3; i++)
{
for(int j=0; j<5; j++)
{
cout << matrice[i][j] << ‘ ‘;
}
cout << endl;
}
*/

#include <array>
#include <iostream>
using namespace std;

int main() {
    array<array<int,3>,5> matrice = {{
        {1 , 2 , 3 } ,
        {4 , 5 , 6 } ,
        {7 , 8 , 9 } ,
        {10 , 11 , 12 } ,
        {13 , 14 , 15 }}};
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << matrice[i][j] << ' ';
        }
        cout << endl;
    }
}
