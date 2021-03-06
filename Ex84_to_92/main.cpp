//
//  main.cpp
//  Ex84_to_92
//
//  Created by Nicolas BAUER on 28/11/2020.
//

#include <iostream>
#include "ex_84.hpp"
#include "ex_85.hpp"
#include "ex_86.hpp"
#include "set_int.hpp"
#include "ex_89.hpp"
#include "ex_90.hpp"
#include "ex_91.hpp"
#include "ex_92.hpp"


using namespace std;

int main(int argc, const char * argv[]) {

    // Exercice 84
    vecteur3d v1(4, 2, 1), v2(7, 4, 6), v3(8, 5, 3), v4(4, 2, 1);
    cout << "v1 egal v2 : " << (v1 == v2) << endl << "v1 different de v2 : " << (v1 != v2) << endl << endl;
    cout << "v1 egal v3 : " << (v1 == v3) << endl << "v1 different de v3 : " << (v1 != v3) << endl << endl;
    cout << "v4 egal v2 : " << (v4 == v2) << endl << "v4 different de v2 : " << (v4 != v2) << endl;
    
    // Exercice 85 voir les fichiers sources ex_85.cpp et .hpp
    cout << endl << endl;
    // Exercice 86
    vecteur3d_3 v1_3(5, 7, 3);
    cout << "v1_3 = ";
    for (int i = 0; i < 3; i++) {
        cout << v1_3[i] << " ";
    }
    for (int i = 0; i < 3; i++) {
        v1_3[i] = i;
    }
    for (int i = 0; i < 3; i++) {
        cout << endl;
        cout << v1_3[i];
    }
    cout << endl << endl;
    
    // Exercice 87 modification aux fichiers source set_int.cpp et .hpp
    // Exercice 88
    SetInt ent(10);
    ent < 25 < 2 < 45 < 3; // with function operator '<'
    cout << (ent[25]) << " " << (ent[3]) << endl;
    
    // Exercice 89
    vecteur_3d_4 v1_4(5, 7, 3);
    const vecteur_3d_4 v2_4(5, 3, 1);
    cout << "v1_4: ";
    for (int i = 0; i < 3; i++) {
        cout << v1_4[i] << " ";
    }
    cout << endl;
    cout << "v2_4: ";
    for (int i = 0; i < 3; i++) {
        cout << v2_4[i] << " ";
    }
    for (int i = 0; i < 3; i++) {
        v1_4[i] = i;
    }
    cout << endl;
    cout << "v1_4: ";
    for (int i = 0; i < 3; i++) {
        cout << v1_4[i] << "";
    }
    // le deuxième vecteur est bien rejeté
    cout << endl << endl;
    
    //Exercice 90
    vect v1_vect(4);
    for (int i = 0; i < 6; i++) {
        v1_vect[i] = i;
    }
    for (int i = 0; i < 6; i++) {
        cout << v1_vect[i] << " ";
    }
    
    cout << endl << endl;
    
    // Exercice 91
    int2d tab1(4, 8);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; i++) {
            tab1(i, j) = i + j;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; i++) {
            cout << tab1(i, j) << " ";
        }
        cout << endl;
    }
    
    cout << endl << endl;
    
    // Exercice 92
    const int n_tranche = 4;
    histo h(0.0, 5.0, n_tranche);
    h << 1.5 << 2.4 << 3.8 << 3.0 << 2.0 << 3.5 << 2.8 << 4.6;
    h << 12.0 << -3.5;
    for (int i = 0; i < 10; i++) {
        h << i / 2.0;
    }
    cout << "valeurs des tranches" << endl;
    for (int i = 1; i <= n_tranche; i++) {
        cout << "numéro " << i << " : " << h[i] << endl;
    }
    return 0;
}
