//
// Created by chris on 2025-08-01.
//

/*Considérer le programme qui affiche le contenu d’un tableau suivant :
array<int,10> tab={0,1,2,3,4,5,6,7,8,9} ;
for (int i = 0 ; i < 10 ; i+=2)
{
cout << tab[i] << endl;
}
*/


#include <array>
#include <iostream>

using namespace std;

int main() {
    array<int,10> tab={0,1,2,3,4,5,6,7,8,9} ;
    for (size_t i = 0 ; i < 10 ; i+=2)
    {
        cout << tab[i] << endl;
    }
}