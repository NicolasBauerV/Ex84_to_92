//
//  ex_89.cpp
//  Ex84_to_92
//
//  Created by Nicolas BAUER on 29/11/2020.
//

#include "ex_89.hpp"

// Non constant vect
float & vecteur_3d_4::operator[](int i){
    if (i < 0 || i > 2) {
        i = 0; // Evite le débordement
    }
    return vect[i];
}

// Constant vect
float vecteur_3d_4::operator [] (int i) const {
    if (i < 0 || i > 2) {
        i = 0; // Evite le débordement
    }
    return vect[i];
}
