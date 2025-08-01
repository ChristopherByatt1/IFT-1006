//
// Created by chris on 2025-08-01.
//
// array<array<int,2>,2> c = {{1,2},{2,3}};

#include <array>
#include <iostream>

using namespace std;

int main() {
    array<array<int,2>,2> c = {{{{1,2}}, {{2,3}}}};;

    // Pour afficher les valeurs :
   for (const auto& ligne : c) {
       for (int val : ligne) {
           cout << val << ' ';
       }
       cout << endl;
   }

}