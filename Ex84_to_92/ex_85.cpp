//
//  ex_85.cpp
//  Ex84_to_92
//
//  Created by Nicolas BAUER on 28/11/2020.
//

#include "ex_85.hpp"
float vecteur3d::getX() {
    return this->x;
}

float vecteur3d::getY() {
    return this->y;
}

float vecteur3d::getZ() {
    return this->z;
}

vecteur3d operator + (vecteur3d v1, vecteur3d v2) {
    vecteur3d result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
float operator * (vecteur3d v1, vecteur3d v2) {
    return ((v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z));
}
