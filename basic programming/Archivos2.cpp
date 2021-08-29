//  main.cpp
//  Archivos2
//
//  Created by Valeria Conde on 31/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {

    char resp;
    int clave, cant, precio;
    
    ofstream salida;
    salida.open("factura.txt"); // si no existe lo crea, si existe sobreescribe

    do {
        cout << "Clave del articulo: ";
        cin >> clave;
        
        cout << "Cantidad de articulos a comprar: ";
        cin >> cant;
        
        cout << "Precio unitario del articulo: ";
        cin >> precio;
        
        salida << clave << " " << cant << " " << precio << endl;
        
        cout << "Quieres dar de alta otro articulo?";
        cin >> resp;
        resp = tolower(resp);
    } while (resp == 's');

    salida.close();
    return 0;
}
