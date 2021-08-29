//  main.cpp
//  Matrices1
//
//  Created by Valeria Conde on 28/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    const int MAXTAM = 15;
    int rengCol;
    int matA[15][MAXTAM];
    
    do {
    cout << "Cuantos renglones y columnas quieres en la matriz? (1 - 15)" << endl;
    cin >> rengCol;
    } while (rengCol < 1 || rengCol > 15);
    
    // Ciclo externo para renglones, interno para columnas; la matriz se llena en horizontal
    for (int reng = 0; reng < rengCol; reng++) {
        for (int col = 0; col < rengCol; col++) {
            cout << "Ingresa el valor de la matriz [" << reng + 1 << "," << col + 1 << "]";
            cin >> matA[reng][col];
        }
    }
    
    // Despliega la matriz completa
    for(int reng = 0; reng < rengCol; reng++) {
        for (int col = 0; col < rengCol; col++) {
            cout << matA[reng][col] << "\t";
        }
        cout << endl;
    }

    // Despliega la diagonal principal
    cout << "Diagonal principal: " << endl;
    for (int reng = 0; reng < rengCol; reng++) {
        cout << matA[reng][reng] << "\t";
    }
    
    cout << endl;
    
    return 0;
}
