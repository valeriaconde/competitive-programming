//  main.cpp
//  Archivos3
//
//  Created by Valeria Conde on 31/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    int clave, cant;
    double precio, subTotal, total = 0;
    
    ifstream entrada;
    entrada.open("/Users/valeriaconde/Desktop/archivos/factura.txt");
    
    cout << "           FACTURA"     << endl;
    cout << "Cve \t Cant \t Precio \t Sub" << endl;
    
    while (entrada >> clave >> cant >> precio) {
        subTotal = cant * precio;
        cout << clave << "\t" << cant << "\t" << precio << "\t" << subTotal << endl;
        total += subTotal;
    }
    
    cout << "\t \t TOTAL $" << total << endl;
    
    entrada.close();
    
    return 0;
}
