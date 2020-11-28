//
//  ex_86.cpp
//  Ex84_to_92
//
//  Created by Nicolas BAUER on 28/11/2020.
//

#include "ex_86.hpp"
#include <iostream>
using namespace std;

float & vecteur3d_3::operator[](int a) {
    if (a < 0 || a > 2) {
        a = 0;
    }
    return vect[a];
}

