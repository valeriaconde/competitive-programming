//
//  main.cpp
//  tt i
//
//  Created by Valeria Conde on 13/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

char ar[505][505];
int r, c;

// recibe una coordenada y ve si es lobo
// si se sale de la matriz lo toma como no lobo
bool isWolf(int ren, int col) {
    if(ren < 0 || ren > r || col < 0 || col > c) return false;
    if(ar[ren][col] == 'W') return true;
    // hace perro al punto de a lado
    if(ar[ren][col] == '.') ar[ren][col] = 'D';
    return false;
}

int main() {
    cin >> r >> c;
    
    for (int p = 0; p < r; p++) {
        for (int v = 0; v < c; v++) {
            cin >> ar[p][v];
        }
    }
    
    for (int p = 0; p < r; p++) {
        for (int v = 0; v < c; v++) {
            if (ar[p][v] == 'S') {
                
                // checa los 4 vecinos
                if(isWolf(p - 1, v)){
                    // NO
                    cout << "No" << endl;
                    return 0;
                }
                if(isWolf(p + 1, v)){
                    // NO
                    cout << "No" << endl;
                    return 0;
                }
                if(isWolf(p, v - 1)){
                    // NO
                    cout << "No" << endl;
                    return 0;
                }
                if(isWolf(p, v + 1)){
                    // NO
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    
    // print yes y matrix
    cout << "Yes" << endl;
    for (int p = 0; p < r; p++) {
        for (int v = 0; v < c; v++) {
            cout << ar[p][v];
        }
        cout << endl;
    }
    
    return 0;
}
