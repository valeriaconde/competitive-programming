//
//  main.cpp
//  Arreglos5
//  RealizaunafunciónllamadaInviertelacualrecibacomoparámetrounarregloacon datos de tipo entero y su tamaño en otra variable entera.
// La función debe copiar los datos del arreglo a a otro arreglo b pero en orden inverso. Al final la función debe regresar el arreglo b.
// Ejemplo:
// Si el arreglo a tiene: 12 8 5 7 3 2
//
// El arreglo b debe tener: 2 3 7 5 8 12

//  Created by Valeria Conde on 24/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>

using namespace std;

void invierte(int a[], int tamano, int b[]) {
    int posicion = tamano;
    for (int cual = 0; cual < tamano; cual++) {
        b[posicion - 1] = a[cual];
        posicion--;
    }
}

int main() {
    
    int datosA[20], datosB[20];
    int tamano;
    
    do {
        cout << "Cuantas casillas quieres en el arreglo (1 - 20) ";
        cin >> tamano;
    } while (tamano < 1 || tamano > 20);
    
    for (int cual = 0; cual < tamano; cual++) {
        cout << "Teclea la posicion " << cual + 1 << " del arreglo ";
        cin >> datosA[cual];
    }
    
    invierte(datosA, tamano, datosB);

    cout << "El arreglo invertido es: " << endl;
    
    for (int i = 0; i < tamano; i++) {
        cout << datosB[i] << endl;
    }

    return 0;
}
