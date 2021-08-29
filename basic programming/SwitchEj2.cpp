//  main.cpp
//  ej2 switch
//  Determina el precio de tarjetas de felicitacion dependiendo de la marca

//  Created by Valeria Conde
//  A01281637

//  16/01/20.

#include <iostream>

using namespace std;

int main() {

    char marca, claveC;
    int claveI;
    
    cout << "Ingresa la marca (F o I)" << endl;
    cin >> marca;
    
    marca = toupper(marca);

    switch (marca) {
        case 'F':
            
            cout << "Ingresa la clave de la tarjeta (A, C, F, G)" << endl;
            cin >> claveC;
            claveC = toupper(claveC);

            switch (claveC) {
                case 'A':
                    cout << "El precio es $8.00" << endl;
                    break;
                   
                case 'C':
                    cout << "El precio es $11.00" << endl;
                    break;
                
                case 'F':
                    cout << "El precio es $15.50" << endl;
                    break;
                    
                case 'G':
                    cout << "El precio es $18.00" << endl;
                    break;
                    
                default:
                    cout << "Clave invalida" << endl;
                    break;
            }
            
            break;
            
        case 'I':
            
            cout << "Ingresa la clave de la tarjeta" << endl;
            cin >> claveI;

            switch (claveI) {
                case 185:
                    cout << "El precio es $12.50" << endl;
                    break;
                    
                case 265:
                    cout << "El precio es $16.00" << endl;
                    break;
                    
                case 435:
                    cout << "El precio es $20.00" << endl;
                    
                case 525:
                    cout << "El precio es $24.50" << endl;
                    
                default:
                    cout << "Clave invalida" << endl;
                    break;
            }
            
            break;
            
        default:
            cout << "Marca invalida \n";
            break;
    }
    
    return 0;
}
