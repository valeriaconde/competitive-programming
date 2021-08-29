//
//  main.cpp
//  Ej1 funciones desalloradas
//  Calcular el perimetro de un triangulo a partir de los 3 puntos que forman el triangulo

//  Created by Valeria Conde
//  A01281637

//  13/01/20.

#include <iostream>
#include <cmath>

using namespace std;

// distanciaPuntos
// Calcula la distancia entre dos puntos
// Parametros de entrada: x1 y y1 del punto 1 y x2 y y2 del punto 2, todos enteros
// Retorno: La distancia entre los dos puntos recibidos de tipo doble
double distanciaPuntos (int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    
    int x1, y1, x2, y2, x3, y3;
    double dist1, dist2, dist3;
    
    cout << "Teclea la x y la y del punto 1" << endl;
    cin >> x1 >> y1;
    
    cout << "Teclea la x y la y del punto 2" << endl;
    cin >> x2 >> y2;
    
    cout << "Teclea la x y la y del punto 3" << endl;
    cin >> x3 >> y3;
    
    dist1 = distanciaPuntos(x1, y1, x2, y2);
    dist2 = distanciaPuntos(x1, y1, x3, y3);
    dist3 = distanciaPuntos(x2, y2, x3, y3);
    
    cout << "El perimetro del triangulo es " << (dist1 + dist2 + dist3) << endl;

    return 0;
}
