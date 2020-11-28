//
//  ex_85.hpp
//  Ex84_to_92
//
//  Created by Nicolas BAUER on 28/11/2020.
//

#ifndef ex_85_hpp
#define ex_85_hpp

#include <iostream>
class vecteur3d_2 {
    float x, y, z;
public:
    vecteur3d_2(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0) {
        x = c1;
        y = c2;
        z = c3;
    }
    friend vecteur3d_2 operator + (vecteur3d_2, vecteur3d_2);
    friend float operator * (vecteur3d_2, vecteur3d_2);
    
    //Assesseurs
    float getX();
    float getY();
    float getZ();
};

#endif /* ex_85_hpp */
