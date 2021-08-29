//
//  main.cpp
//  ParametrosReferencia7
//  Escribe una función que reciba como parámetro 2 fechas (dadas como dia, mes y año) y que regrese en 3 parámetros de salida la fecha menor (regresará los 3 valores: dia, mes y año).
//  Escribe ahora un programa que pida al usuario 3 fechas y utilizando la función que creaste calcule y muestre la fecha menor de las 3.

//  Created by Valeria Conde on 23/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>

using namespace std;

void fechaMenor(int dia1, int mes1, int a1, int dia2, int mes2, int a2, int &diaMenor, int &mesMenor, int &aMenor) {
    
    if (a1 < a2) {
        diaMenor = dia1;
        mesMenor = mes1;
        aMenor = a1;
    } else if (a2 < a1) {
        diaMenor = dia2;
        mesMenor = mes2;
        aMenor = a2;
    } else {
        if (mes1 < mes2) {
            diaMenor = dia1;
            mesMenor = mes1;
            aMenor = a1;
        } else if (mes2 < mes1) {
            diaMenor = dia2;
            mesMenor = mes2;
            aMenor = a2;
        } else {
            if (dia1 < dia2) {
                diaMenor = dia1;
                mesMenor = mes1;
                aMenor = a1;
            } else if (dia2 < dia1) {
                diaMenor = dia2;
                mesMenor = mes2;
                aMenor = a2;
            } else {
                cout << "Son la misma fecha!" << endl;
            }
        }
    }
}

int main() {
    
    int d1, m1, a1, d2, m2, a2, d3, m3, a3, dM, mM, aM;
    
    cout << "Ingresa fecha 1 (dd, mm, aaaa): ";
    cin >> d1 >> m1 >> a1;
    
    cout << "Ingresa fecha 2 (dd, mm, aaaa): ";
    cin >> d2 >> m2 >> a2;
    
    cout << "Ingresa fecha 3 (dd, mm, aaaa): ";
    cin >> d3 >> m3 >> a3;
    
    
    fechaMenor(d1, m1, a1, d2, m2, a2, dM, mM, aM);
    fechaMenor(dM, mM, aM, d3, m3, a3, dM, mM, aM);
    
    cout << dM << " " << mM << " " << aM << endl;
    
    return 0;
}
