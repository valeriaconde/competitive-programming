//  main.cpp
//  Ej11Ciclos
//  Pregunta por un numero n y muestra n terminos de la sumatoria:
//  1 + 1/2 + 3 + 1/4 + 5 + 1/6... = XX.XX

//  Created by Valeria Conde
//  A01281637

//  20/01/20.

#include <iostream>

using namespace std;

int main() {
    
    int n, termino = 1;
    double serie = 0;
    
    cout << "Cuantos terminos quieres calcular en la serie?" << endl;
    cin >> n;
    
    // Ciclo para calcular la cantidad de terminos que quiere el usuario
    for (int i = 1; i <= n; i++) {
        // Pregunto si se trata del ultimo termino, y si es, pone el signo de =
        // si no, pongo +
        if (i == n) {
            // Identifico si el termino actual es par y despliega y suma su inverso,
            // si no, despliega y suma el termino
            if (i % 2 == 0) {
                cout << "1/" << termino << " = ";
                serie = serie + 1.0 / termino;
            } else {
                cout << termino << " = ";
                serie = serie + termino;
            }
        } else {
            if (i % 2 == 0) {
                cout << "1/" << termino << " + ";
                serie = serie + 1.0 / termino;
            } else {
                cout << termino << " + ";
                serie = serie + termino;
            }
        }
        termino++;
    }
    
    // Muestra la serie
    cout << serie << endl;
    
    return 0;
}
