//
//  main.cpp
//  pisano period
//
//  Created by Valeria Conde on 30/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a = 0, b = 1, fib;
    
    for(int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    
    cout << fib << endl;
    
    
    return 0;
}
