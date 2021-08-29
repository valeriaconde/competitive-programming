//  main.cpp
//  Integradora
//
//  Created by Valeria Conde on 30/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>

using namespace std;

const int TAM = 4;

void despliega(int matInicial[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (matInicial[i][j] != 0) {
                cout << matInicial[i][j] << "\t";
            } else {
                cout << " " << "\t";
            }
        }
        cout << endl;
    }
}

void enPosicion(int matIinicial[TAM][TAM], int ficha, int& renglon, int& columna) {
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            if (matIinicial[i][j] == ficha) {
                renglon = i;
                columna = j;
            }
        }
    }
}

bool win(int matInicial[TAM][TAM], int matMeta[TAM][TAM]) {
    
    bool resultado = true;
    
    for(int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (matInicial[i][j] != matMeta[i][j]) {
                resultado = false;
            }
        }
    }
    return resultado;
}

bool mueve(int matInicial[TAM][TAM], int reng, int col) {
    bool cambio = false;
    
    if (reng > 0) {
        if (matInicial[reng - 1][col] )
    }
    
}

int main() {
    
    int matInicial[TAM][TAM] = {{8, 7, 5, 15}, {1, 9, 0, 3}, {11, 2, 6, 12}, {4, 14, 10, 13}};
    int matMeta[TAM][TAM] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 0}};
    int ficha, renglon, columna;
    
    despliega(matInicial);

    do {
        cout << "Escoge una ficha c:" << endl;
        cin >> ficha;
    } while (ficha < 1 || ficha > 15);
    
    enPosicion(matInicial, ficha, renglon, columna);
    cout << win(matInicial, matMeta) << endl;
        
    return 0;
}
