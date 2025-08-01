#include <iostream>

using std::cout;
using std::endl;


int main ()
{
  int total = 0;

  for (int x = 0; x <= 100; x++ )
  {
    if (x % 2 == 0)
      {
        cout << x << "pair" << endl;
        total += x;
      }
  }

  cout << "Le programme termine et le total est " << total << endl;
  return 0;
}
