//  main.cpp
//  Strings3
//  Escribe un programa que pida una palabra y que muestre un mensaje que indique si se trata de un palíndromo o no.

//  Created by Valeria Conde on 30/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string original, nuevoStr = "";
    long pos;
    
    cout << "Ingresa palabra" << endl;
    getline(cin, original);
    
    // Hace minusculas
    for(int i = 0; i < original.length(); i++) {
        original[i] = tolower(original[i]);
    }
    
    // Quita espacios en blanco
    do {
        pos = original.find(' ');
        
        if (pos != -1) {
            original.erase(pos, 1);
        }
    } while (pos != -1);
    
    // Invierte
    for(int i = original.length() - 1; i >= 0; i--) {
        nuevoStr += original[i];
    }
    
    if (original == nuevoStr) {
        cout << "Es palindromo" << endl;
    } else {
        cout << "Nop" << endl;
    }
    
    return 0;
}
