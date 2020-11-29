//
//  ex_89.hpp
//  Ex84_to_92
//
//  Created by Nicolas BAUER on 29/11/2020.
//

#ifndef ex_89_hpp
#define ex_89_hpp

#include <iostream>
class vecteur_3d_4{
    float vect[3];
public:
    vecteur_3d_4(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0){
        vect[0] = c1;
        vect[1] = c2;
        vect[2] = c3;
    }
    float operator [] (int) const; //constant vect
    float & operator [] (int); // non constant vect
};

#endif /* ex_89_hpp */
