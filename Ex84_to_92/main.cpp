//
//  main.cpp
//  Ex84_to_92
//
//  Created by Nicolas BAUER on 28/11/2020.
//

#include <iostream>
#include "ex_84.hpp"
#include "ex_85.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // Exercice 84
    vecteur3d v1(4, 2, 1), v2(7, 4, 6), v3(8, 5, 3), v4(4, 2, 1);
    cout << "v1 egal v2 : " << (v1 == v2) << endl << "v1 different de v2 : " << (v1 != v2) << endl << endl;
    cout << "v1 egal v3 : " << (v1 == v3) << endl << "v1 different de v3 : " << (v1 != v3) << endl << endl;
    cout << "v4 egal v2 : " << (v4 == v2) << endl << "v4 different de v2 : " << (v4 != v2) << endl;
    
    // Exercice 85
    
    return 0;
}
