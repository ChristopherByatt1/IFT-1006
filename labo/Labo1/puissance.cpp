/**
 * \file puissance.cpp
 * \author FRM, THE
 * \brief Programme démo calcul de x à la puissance y en langage C++
 */
#include <iostream>
using namespace std;


int main (void)
{
  cout << "Ce programme calcule x a la puissance y." << endl;
  int x;
  do
    {
      cout << "Veuillez entrer la valeur entière de x (different de 0): " << endl;
      cin >> x;
    }
  while (x == 0);
  /*A: x est différent de 0*/

  int y;
  do
    {
      cout << "\nVeuillez entre la valeur de y strictement positif: " << endl;
      cin >> y;
    }
  while (y <= 0);
  /*A: y > 0 */

  int i = 0;
  int puissance;
  puissance = x;
  while (i < y - 1)
    {
      puissance = puissance * x;
      i++;
    }

  cout << "x a la puissance y = " << puissance << endl;

}


