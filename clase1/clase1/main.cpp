//
//  main.cpp
//  clase1
//
//  Created by Valeria Conde on 12/4/19.
//  Copyright © 2019 Valeria Conde. All rights reserved.
//

//Librerias
#include <iostream>
//#include <vector>

/*
 hola
 soy un comment
 */

using namespace std;

//Codigo
int main() {
    int x = 10;
    double y = 3.14159265;
    char c = 'y';
    string s = "Hello";
    
long long ll = 1234561234567890; // ~ 18 digitos
    
    // memoria estatica v. memoria dinamica

    // declarar sin valor
    int n, q;
    int num;
    num = 17;
    
    int arreglo[5];
    int arr[] = {10, 11, 12};
    

    if(x > 20) {
        cout << "X es mayor a 20";
    } else if (x == 20) {
        cout << "X es igual a 20";
    } else {
        cout << "X es menos a 20";
    }
    
    int edad;
    // leer datos de la consola
    cin >> edad;

    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
    
    // si le digo q es int y es double tacha los decimales
    int f = 3.14;
    cout << x << endl;

    char g = '\n';

    // to_string(edad);
    // appendea como string
    
    // stoi(sNum); ...
    // string to int
    
    // leer strings
    string t;
    cin >> t;
    cout << t;
    
    //va a leer solo la primera palabra, si quiero todo es
    getline(cin, t);
    
    // funciones
    string w = "valeria";
    cout << w.size() << endl;
    cout << w[0] << endl;
    
    
    // leer nombres
    
    int z;
    
    cin >> z;
    
    string nombres[z];
    
    for (int i = 0; i < x; i++) {
        cin >> nombres[i];
    }
    
    
    int conteo[30] = {0}; // 0-a, 1-b, 2-c, 3-d...
    
    for (int i = 0; i < x; i++) {
        string nombre = nombres[i]; // elias, val, diego
        
        for (int j = 0; j < nombre.size(); j++) {
            char caracter = nombre[j]; // e, l, i, a, s
            conteo[caracter - 'a'] += 1; // mapeando
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << 'a' + i << ": " << conteo [i] << endl;
    }

    //convertir de tipo a tipo
    // (char)
    
    
    

    cout << "Hello, World!\n";
    return 0;
}

