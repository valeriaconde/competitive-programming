//  main.cpp
//  Matrices6

//  Haz una función que reciba como parámetro una matriz de N por N elementos enteros, que reciba también el valor de N y un valor entero A, donde A representa un número de renglón.
//  La función debe regresar en un parámetro de tipo arreglo de 1 dimensión los valores del renglón A.
//  El valor máximo de N es 20.

// Ej 7
//  Haz una función que reciba como parámetro una matriz de N por N elementos enteros.
//  La función debe regresar en un parámetro de tipo arreglo de 1 dimensión los valores de la diagonal principal de la matriz.
//  El valor máximo de N es 20.


//  Created by Valeria Conde on 29/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.


#include <iostream>

using namespace std;

const int NUM = 10;

// Encuentra el numero mayor
void encuentraMayor(int matriz[NUM][NUM], int rengCol) {
    
}

// Funcion que lee datos de la matriz
void leeDatos(int matA[NUM][NUM], int tam) {
    for (int reng = 0; reng < tam; reng++) {
        for (int col = 0; col < tam; col++) {
            cout << "Ingresa el valor de la matriz [" << reng + 1 << "," << col + 1 << "]";
            cin >> matA[reng][col];
        }
    }
}

// Suma de la diagonal principal
int sumaP(int matA[NUM][NUM], int tam) {
    
    int contDP = 0;
    
    for (int i = 0; i < tam; i++) {
        contDP += matA[i][i];
    }
    return contDP;
}

// Suma de la diagonal inversa
int sumaI(int matA[NUM][NUM], int tam) {
    
    int contDI = 0;
    
       for (int i = 0, j = tam - 1; i < tam; i++, j--) {
           contDI += matA[i][j];
       }
    return contDI;
}

// Regresa el renglon que pide el usuario
void pasaRenglon(int matA[NUM][NUM], int rengCol, int numReng, int arrResultado[]) {
    for (int i = 0; i < rengCol; i++) {
        arrResultado[i] = matA[numReng - 1][i];
    }
}

// Regresa los valores de la diagonal principal de la matriz en forma de arreglo
void muestraDiagonal(int matA[NUM][NUM], int tam, int arrDiagonal[]) {
    for (int i = 0; i < tam; i++) {
        arrDiagonal[i] = matA[i][i];
    }
}

int main() {
    
    int tam, numReng;
    int matA[NUM][NUM];
    int arrResultado[NUM];
    int arrDiagonal[NUM];
    
    do {
    cout << "Cuantos renglones y columnas quieres en la matriz? (1 - 10)" << endl;
    cin >> tam;
    } while (tam < 1 || tam > NUM);
        
    leeDatos(matA, tam);
    
    cout << "Suma de los datos de la diagonal principal " << sumaP(matA, tam) << endl;

    cout << "Suma de los datos de la diagonal inversa " << sumaI(matA, tam) << endl;
    
    // Ejercicio 6
    do {
        cout << "Ingresa el numero de renglon que quieres pasar de la matriz al arreglo ";
        cin >> numReng;
    } while (numReng < 1 || numReng > tam);
    
    pasaRenglon(matA, tam, numReng, arrResultado);
    
    for (int i = 0; i < tam; i++) {
        cout << arrResultado[i] << " ";
    }
    cout << endl;
    
    muestraDiagonal(matA, tam, arrDiagonal);
    for (int i = 0; i < tam; i++) {
        cout << arrDiagonal[i] << " ";
    }
    cout << endl;

    return 0;
}

