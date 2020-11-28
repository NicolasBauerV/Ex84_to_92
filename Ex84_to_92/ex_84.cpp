//
//  ex_84.cpp
//  Ex84_to_92
//
//  Created by Nicolas BAUER on 28/11/2020.
//

#include "ex_84.hpp"
#include <iostream>
using namespace std;

// a. Fonction Membre
/*
int vecteur3d::operator == (vecteur3d v) {
    if ((v.x == x) && (v.y == y) && (v.z == z)) {
        return 1;
    } else {
        return 0;
    }
}

int vecteur3d::operator!=(vecteur3d v) {
    return !(*this == v);
}
*/

// b. Fonction amies
int operator == (vecteur3d v1, vecteur3d v2) {
    if ((v1.x == v2.x) && (v1.y == v2.y) && (v1.z == v2.z)) {
        return 1;
    } else {
        return 0;
    }
}

int operator != (vecteur3d v1, vecteur3d v2) {
    return !(v1 == v2);
}
