//  main.cpp
//  CiclosAnidadosEj4
//  Tablas de multiplicar

//  Created by Valeria Conde
//  A01281637
//  21/01/20.

#include <iostream>

using namespace std;

int main() {

    int n;
    
    cout << "Hasta que tabla quieres desplegar" << endl;
    cin >> n;
    
    for (int cualTabla = 2; cualTabla <= n; cualTabla++) {
        cout << "Tabla del " << cualTabla << endl;
        for (int i =1; i <= 10; i++) {
            cout << cualTabla << " x " << i << " = " << (cualTabla * i) << endl;
        }
    }
    
    return 0;
}
