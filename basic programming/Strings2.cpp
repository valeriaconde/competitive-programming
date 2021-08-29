//  main.cpp
//  Strings2
//  Escribe un programa que pida al usuario un string y construya otro string que contenga solamente los caracteres pares del string original ( recuerda que los caracteres del string empiezan en la casilla 0, considera al 0 como par).

//  Created by Valeria Conde on 30/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string palabra, nuevaPalabra = "";
    
    cout << "Teclea un string" << endl;
    getline(cin, palabra);
    
    for(int i = 0; i < palabra.length(); i+=2) {
        nuevaPalabra += palabra[i];
    }
    
    cout << nuevaPalabra << endl;
    
    return 0;
}
