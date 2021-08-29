//  main.cpp
//  Ej12Ciclos
//  Dado un numero entero n, muestra la serie formada por todos los numeros
//  nones que van desde 1 hasta n (si n fuera par, la serie termina en n-1).
//  En la serie el primer termino (el 1) tiene signo positivo
//  y luego el signo se va alternando en los siguientes terminos.

//  Ej. n = 9
//      1 - 3 + 5 - 7 + 9 = 5;
//  Ej. n = 12
//      1 - 3 + 5 - 7 + 9 - 11 = -6;

//  Created by Valeria Conde
//  A01281637

//  20/01/20

#include <iostream>

using namespace std;

int main() {
    
    int termino, serie = 0, n;
    
    cout << "Hasta que termino quieres que llegue la serie?" << endl;
    cin >> n;
    
    if (n % 2 == 0) {
        n--;
    }
    
    for (int i = 1, termino = 1; termino <= n; termino += 2, i++) {
        if (i % 2 == 0) {
            serie -= termino;
            if (termino < n) {
                cout << termino << " + ";
            } else {
                cout << termino;
            }
        } else {
            serie += termino;
            if (termino < n) {
                cout << termino << " - ";
            } else {
                cout << termino;
            }
        }
    }
    
    cout << " = " << serie << endl;
    
    return 0;
}
