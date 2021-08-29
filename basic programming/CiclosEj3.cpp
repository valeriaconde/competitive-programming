//  main.cpp
//  Ej3Ciclos
//  Pregunta por un numero n y muestra n terminos de la sumatoria:
//  1/1 + 1/2 + 1/3 + 1/4 + 1/5... = XX.XX

//  Created by Valeria Conde
//  A01281637

//  20/01/20

#include <iostream>

using namespace std;

int main() {
    
    int n;
    double serie = 0;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if (i == n) {
            cout << "1/ " << i << " = ";
            serie += 1.0 / i;
        } else {
            cout << "1/" << i << " + ";
            serie += 1.0 / i;
        }
    }
    
    cout << serie << endl;
    
    
    return 0;
}
