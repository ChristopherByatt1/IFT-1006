//
// Created by chris on 2025-08-01.
//

#include <array>
#include <iostream>

using namespace std;

int main() {

// Présumez array<array<int,2>,2> a = {{{1,2}, {3,4}}};

    array<array<int,2>,2> a = {{{1,2}, {3,4}}};

    a[0][0] = 5;

    for (const auto& row : a) {
        for (int val : row)
            std::cout << val << " ";
        std::cout << '\n';
    }
}