//
//  main.cpp
//  ej3 funciones

//  Programa que determina el numero de dias de un mes, identificando si
//  es ano bisiesto o no
//
//  Created by Valeria Conde
//  A01281637
//
//  14/01/20.

#include <iostream>

using namespace std;

// funcion esBisiesto
// La funcion determina si el a;o es bisiesto
// Parametros: el a;o
// Regresa: si es bisiesto o no
bool esBisiesto(int x) {
    if (x % 400 == 0) {
        return true;
    } else if (x % 4 == 0 && x % 100 != 0) {
        return true;
    }
    return false;
}

int main() {
    
    int m, a;
    
    cout << "Ingresa el mes y el año" << endl;
    cin >> m >> a;

    if (m == 2) {
        if (esBisiesto(a) == true) {
            cout << "29" << endl;
        } else {
            cout << "28" << endl;
        }
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        cout << "30" << endl;
    } else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        cout << "31" << endl;
    } else {
        cout << "mes invalido" << endl;
    }
    
    return 0;
}
