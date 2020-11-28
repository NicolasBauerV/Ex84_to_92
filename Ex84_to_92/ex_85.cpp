//
//  ex_85.cpp
//  Ex84_to_92
//
//  Created by Nicolas BAUER on 28/11/2020.
//

#include "ex_85.hpp"
float vecteur3d_2::getX() {
    return this->x;
}

float vecteur3d_2::getY() {
    return this->y;
}

float vecteur3d_2::getZ() {
    return this->z;
}

vecteur3d_2 operator + (vecteur3d_2 v1, vecteur3d_2 v2) {
    vecteur3d_2 result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
float operator * (vecteur3d_2 v1, vecteur3d_2 v2) {
    return ((v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z));
}
