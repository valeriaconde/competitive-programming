//
//  main.cpp
//  Arreglos3
//  Realizaunafunciónquerecibacomoparámetrounarregloadenúmerosdetipodouble y su tamaño en otra variable entera.
//  La función debe construir dos arreglos p y n. El arreglo p contendrá los números positivos que estaban en a y el arreglo n los negativos. La función debe regresar en parámetros por referencia los 2 arreglos p y n con sus tamaños.

//  Created by Valeria Conde on 24/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>

using namespace std;

void divideArr(double arrDatos[], int tamano, double arrP[], int &sizeP, double arrN[], int &sizeN) {
    sizeP = 0;
    sizeN = 0;
    
    for (int cual = 0; cual < tamano; cual ++) {
        if (arrDatos[cual] >= 0) {
            arrP[sizeP] = arrDatos[cual];
            sizeP++;
        } else {
            arrN[sizeN] = arrDatos[cual];
            sizeN++;
        }
    }
}

int main() {
    
    double arrDatos[20], arrP[20], arrN[20];
    int tamano, sizeP, sizeN;
    
    do {
        cout << "Cuantas casillas quieres en el arreglo (1 - 20) ";
        cin >> tamano;
    } while (tamano < 1 || tamano > 20);
    
    for (int cual = 0; cual < tamano; cual++) {
        cout << "Teclea la posicion " << cual + 1 << " del arreglo ";
        cin >> arrDatos[cual];
    }
    
    divideArr(arrDatos, tamano, arrP, sizeP, arrN, sizeN);
    
    cout << "El arrgelo de positivos es: " << endl;
    
    for (int cual = 0; cual < sizeP; cual++){
        cout << arrP[cual] << endl;
    }
    
    cout << "El arreglo de negativos es: " << endl;
    
    for (int cual = 0; cual < sizeN; cual++) {
        cout << arrN[cual] << endl;
    }
    
    return 0;
}
