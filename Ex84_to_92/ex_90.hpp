//
//  ex_90.hpp
//  Ex84_to_92
//
//  Created by Nicolas BAUER on 29/11/2020.
//

#ifndef ex_90_hpp
#define ex_90_hpp

class vect {
    int nElement;
    int *addr;
public:
    vect(int);
    ~vect();
    int & operator [] (int);
};

#endif /* ex_90_hpp */
