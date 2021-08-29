//  main.cpp
//  Matrices2
//  Pide al usuario el orden de una matriz cuadrada, los datos, y muestra la suma de los elementos de la diagonal principal y la diagonal no principal de la matriz

//  Created by Valeria Conde on 28/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int tam, contDP = 0, contDI = 0;
    int matA[10][10];
    
    do {
    cout << "Cuantos renglones y columnas quieres en la matriz? (1 - 10)" << endl;
    cin >> tam;
    } while (tam < 1 || tam > 10);
    
    // Ciclo para pedir los valores
    for (int reng = 0; reng < tam; reng++) {
        for (int col = 0; col < tam; col++) {
            cout << "Ingresa el valor de la matriz [" << reng + 1 << "," << col + 1 << "]";
            cin >> matA[reng][col];
        }
    }
    
    // Ciclo para sumar los datos de la diagonal principal
    for (int i = 0; i < tam; i++) {
        contDP += matA[i][i];
    }
    cout << "Suma de los datos de la diagonal principal " << contDP << endl;

    // Ciclo para sumar los datos de la diagonal inversa
    for (int i = 0, j = tam - 1; i < tam; i++, j--) {
        contDI += matA[i][j];
    }
    cout << "Suma de los datos de la diagonal inversa " << contDI << endl;
    
    return 0;
}
