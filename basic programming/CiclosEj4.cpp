//  main.cpp
//  CiclosEj4

//  Muestra la siguiente lista de números: 1, 2, ... N, N-1, N-2 ... 1
//  Ej. n = 5
//           1, 2, 3, 4, 5, 4, 3, 2, 1

//  Created by Valeria Conde on 20/01/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for (int i = 1; i < n; i++)
        cout << i << " ";
    
    
    for (int i = n; i > 0; i--)
        cout << i << " ";
    
    
    return 0;
}
