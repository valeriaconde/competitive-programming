//  main.cpp
//  Strings1
//  Escribe un programa que pida al usuario un string y construya otro string que contenga los caracteres del primer string pero al revés.
//  Created by Valeria Conde on 30/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string valor, nuevoStr = "";
    
    cout << "Teclea un string" << endl;
    getline(cin, valor);
    
    for(int i = valor.length() - 1; i >= 0; i--) {
        nuevoStr += valor[i];
    }
    
    cout << "El nuevo string es " << nuevoStr << endl;
    
    return 0;
}
