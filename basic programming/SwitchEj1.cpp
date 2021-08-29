//  main.cpp

//  ej1 switch
//  Despliega el precio de los CDs segun la clave

//  Created by Valeria Conde
//  A01281637

//  16/01/20.


#include <iostream>

using namespace std;

int main() {
    char clave;
    
    cout << "Teclea la clave del CD" << endl;
    cin >> clave;
    
    // Convierte a mayusculas
    clave = toupper(clave);
    
    switch (clave) {
        case 'A':
            cout << "El precio es $59.90" << endl;
            break;
            
        case 'B':
            cout << "El precio es $129.90" << endl;
            break;
            
        case 'C':
            cout << "El precio es $179.90" << endl;
            break;
            
        case 'D':
            cout << "El precio es $250.00" << endl;
            break;
            
        default:
            cout << "ERROR: Clave invalida" << endl;
            break;
    }
    
    return 0;
}
