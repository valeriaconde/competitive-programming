//
//  main.cpp
//  LCM
//
//  Created by Valeria Conde on 30/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    long long a, b;
    cin >> a >> b;
    
    cout << a * b / gcd(a, b) << endl;
    
    return 0;
}
