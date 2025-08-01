#include <iostream>

using namespace std;


int main ()
{
  int total,        // somme des notes
          notesSaisies = 0, // compteur de notes saisies
          note,        // une note
          moyenne;      // moyenne des notes
  const int NOMBRE_NOTES_A_SAISIR = 10;

  while ( notesSaisies < NOMBRE_NOTES_A_SAISIR )
    {
      cout << "Entrer une note: ";
      cin >> note;                     // saisie d'une note
      total = total + note;
      notesSaisies = notesSaisies + 1;  // incrémentation du compteur
    }

  moyenne = total / NOMBRE_NOTES_A_SAISIR;
  cout << "La moyenne de la classe est " << moyenne << endl;

  return 0;
}
