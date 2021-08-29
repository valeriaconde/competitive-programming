//  main.cpp
//  CiclosEj8
//  Factorial de un numero n entero positivo

//  Created by Valeria Conde on 20/01/20
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int n, factorial = 1;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    cout << factorial << endl;
    
    return 0;
}
