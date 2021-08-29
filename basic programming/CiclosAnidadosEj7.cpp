//  main.cpp
//  CiclosAnidadosEj7
//  Triangulo de asteriscos

//  Created by Valeria Conde on 21/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.

#include <iostream>

using namespace std;

int main() {
    
    int n;
    
    cout << "Cuantos renglones" << endl;
    cin >> n;
    
    for (int cualRenglon = 1; cualRenglon <= n; cualRenglon++) {
        for (int i = 1; i <= cualRenglon; i++) {
            cout << " * ";
        }
        cout << endl;
    }
    
    return 0;
}
