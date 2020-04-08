//
//  main.cpp
//  j
//
//  Created by Valeria Conde on 24/03/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
#define MOD 10
using namespace std;

long long fpow(int base, long long power) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1) {
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2;
    }
    return result % MOD;
}


int main() {
    int t;
    cin >> t;
    
    while (t > 0) {
        int a;
        long long b;
        string n;
        
        cin >> a >> b;
        
        n = to_string(fpow(a,b));
        cout << n << endl;
        t--;
    }
    return 0;
}
