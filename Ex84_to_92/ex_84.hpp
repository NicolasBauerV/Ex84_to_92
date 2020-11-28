//
//  ex_84.hpp
//  Ex84_to_92
//
//  Created by Nicolas BAUER on 28/11/2020.
//

#ifndef ex_84_hpp
#define ex_84_hpp

#include <iostream>
using namespace std;

class vecteur3d {
    // private
    float x, y, z;
public:
    vecteur3d(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0) {
        x = c1;
        y = c2;
        z = c3;
    }
//    Partie A Fonction Membre
//    int operator == (vecteur3d);
//    int operator != (vecteur3d);
    
//    Partie B Fonction Amies
    friend int operator == (vecteur3d, vecteur3d);
    friend int operator != (vecteur3d, vecteur3d);
};

#endif /* ex_84_hpp */
