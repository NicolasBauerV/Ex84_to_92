//
//  ex_90.cpp
//  Ex84_to_92
//
//  Created by Nicolas BAUER on 29/11/2020.
//

#include "ex_90.hpp"
vect::vect(int e) {
    addr = new int [nElement = e];
    for (int i = 0; i < nElement; i++) {
        addr[i] = 0;
    }
}

vect::~vect() {
    delete addr;
}

int & vect::operator[](int i) {
    if (i < 0 || i >= nElement) {
        i = 0; // Évite le débordement
    }
    return addr[i];
}
