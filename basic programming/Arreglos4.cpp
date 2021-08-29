// main.cpp
//  Arreglos4
//  RealizaunafunciónllamadaSustituyelacualrecibacomoparámetrounarreglocon datos de tipo entero, el tamaño del arreglo y un número entero N.

//  La función debe de sustituir todos los números del arreglomúltiplos de N por el valor –1.

//  Created by Valeria Conde on 24/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>

using namespace std;

void sustituye(int arr[], int tam, int n) {
    
    for (int i = 0 ; i < tam; i++) {
        if (arr[i] % n == 0) {
            arr[i] = -1;
        }
    }
}

int main() {

    int tam, n;
    
    cout << "Ingresa numero n" << endl;
    cin >> n;
    
    cout << "Cuantos datos quieres ingresar al arreglo?" << endl;
    cin >> tam;
    
    int arr[tam];
    
    for (int i = 0; i < tam; i++) {
        cout << "Ingresa el valor " << i + 1 << " del arreglo: ";
        cin >> arr[i];
    }
    
    sustituye(arr, tam, n);
    
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}
