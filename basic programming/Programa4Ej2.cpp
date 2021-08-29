//  main.cpp
//  Programa4Ej2
//  Funcion que recibe como parámetro el valor de x que es double
//  y el valor de k que es entero y regrese como valor de retorno el término:
//  (pow(x, k))/(sqrt(k))

//  En la funcion main pide al usuario el valor de x y el valor de n,
//  y calcula el resultado de la sumatoria:

// CASOS PRUEBA
// x = 5
// n = 5
// MUESTRA = 1804.89

// x = 3
// n = 4
// MUESTRA = 65.45

//  Created by Valeria Conde
//  A01281637

//  20/01/20


#include <iostream>
#include <cmath>

using namespace std;

// funcion termino
// calcula una expresion matematica a partir de dos terminos
// parametros: un doble x y un entero k
// regresa: el resultado en doble de x a la k sobre raiz cuadrada de k
double termino(double x, int k) {
    return pow(x, k) / sqrt(k);
}

int main() {
    
    int x, n;
    double serie = 0;
    
    cout << "Ingresa el valor de x" << endl;
    cin >> x;
    
    cout << "Ingresa el valor de n" << endl;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        serie += termino(x, i);
    }
    
    cout << serie << endl;
    
    return 0;
}
