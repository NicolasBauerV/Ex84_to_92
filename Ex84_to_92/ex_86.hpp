//
//  ex_86.hpp
//  Ex84_to_92
//
//  Created by Nicolas BAUER on 28/11/2020.
//

#ifndef ex_86_hpp
#define ex_86_hpp

#include <iostream>
class vecteur3d_3 {
    float vect[3];
public:
    vecteur3d_3(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0) {
        vect[0] = c1;
        vect[1] = c2;
        vect[2] = c3;
    }
    float & operator [] (int);
};

#endif /* ex_86_hpp */
