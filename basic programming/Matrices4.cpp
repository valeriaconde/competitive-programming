//  main.cpp
//  Matrices4
//  Haz una función que reciba como parámetro un arreglo bidimensional que representa una matriz y que reciba también como parámetro la cantidad de renglones y columnas de la matriz.

//  La función debe encontrar el elemento mayor de todos los que contiene la matriz y mostrar en la pantalla cuál fue el elemento mayor y en que coordenadas (renglón y columna) de la matriz se encuentra.

//  Created by Valeria Conde on 29/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>

using namespace std;

const int NUMERO = 10;

// DOES  WORK WITH NEGATIVES c:
void encuentraMayor(int matriz[NUMERO][NUMERO], int tam) {
    int mayor = INT_MIN;
    int reng, col;
    
    for (int i =0; i < tam; i ++) {
        for (int j = 0; j < tam; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                reng = i;
                col = j;
            }
        }
    }
    
    cout << "mayor: " << mayor << " en: " << reng + 1 << "," << col + 1 << endl;
}

// Funcion que lee datos de la matriz
void leeDatos(int matA[NUMERO][NUMERO], int tam) {
    for (int reng = 0; reng < tam; reng++) {
        for (int col = 0; col < tam; col++) {
            cout << "Ingresa el valor de la matriz [" << reng + 1 << "," << col + 1 << "]";
            cin >> matA[reng][col];
        }
    }
}

// Suma de la diagonal principal
int sumaP(int matA[NUMERO][NUMERO], int tam) {
    
    int contDP = 0;
    
    for (int i = 0; i < tam; i++) {
        contDP += matA[i][i];
    }
    return contDP;
}

// Suma de la diagonal inversa
int sumaI(int matA[NUMERO][NUMERO], int tam) {
    
    int contDI = 0;
    
       for (int i = 0, j = tam - 1; i < tam; i++, j--) {
           contDI += matA[i][j];
       }
    return contDI;
}


int main() {
    
    int tam;
    int matA[NUMERO][NUMERO];
    
    do {
    cout << "Cuantos renglones y columnas quieres en la matriz? (1 - 10)" << endl;
    cin >> tam;
    } while (tam < 1 || tam > NUMERO);
    
    leeDatos(matA, tam);
    
    cout << "Suma de los datos de la diagonal principal " << sumaP(matA, tam) << endl;

    cout << "Suma de los datos de la diagonal inversa " << sumaI(matA, tam) << endl;
    
    encuentraMayor(matA, tam);
    
    return 0;
}
