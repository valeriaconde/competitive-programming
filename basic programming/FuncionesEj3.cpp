//
//  main.cpp
//  ej3 funciones

//  El programa pide las medidas de una alberca y regresa el area de
//  las paredes que deben pintarse total
//
//  Created by Valeria Conde
//  A01281637
//
//  14/01/20.

#include <iostream>

using namespace std;

// funcion areaRect
// Recibe el valor de los lados de un rectangulo y regresa su area
// Parametros: Los lados de un rectangulo
// Regresa: El area del rectangulo
double areaRect(double x, double y) {
    return x * y;
}

int main() {
    
    double largo, ancho, profundo, volumen;
    
    cout << "Ingresa largo y ancho de la alberca" << endl;
    cin >> largo >> ancho;
    
    cout << "Ingresa profundidad de la alberca" << endl;
    cin >> profundo;
    
    volumen = (areaRect(largo, profundo) * 2) + (areaRect(ancho, profundo) * 2) + (areaRect(largo, ancho));
    
    cout << "El volumen de la alberca es " << volumen << endl;
    
    return 0;
}
