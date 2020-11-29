//
//  ex_91.hpp
//  Ex84_to_92
//
//  Created by Nicolas BAUER on 29/11/2020.
//

#ifndef ex_91_hpp
#define ex_91_hpp

class int2d {
    int nb_lignes;
    int nb_col;
    int *addr_val;
public:
    int2d(int nl, int nc);
    ~int2d();
    int & operator() (int i, int j);
};

#endif /* ex_91_hpp */
