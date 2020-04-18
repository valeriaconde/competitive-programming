//
//  main.cpp
//  s
//
//  Created by Valeria Conde on 31/03/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#define MOD 1000000007LL
using namespace std;

long long mulmod(long long a, long long b, long long c) { // returns (a * b) % c, and minimize overflow
    long long x = 0, y = a % c;
    while (b) {
        if (b & 1) x = (x + y) % c;
        y = (y<<1) % c;
        b >>= 1;
    }
    return x % c;
}

/** return a^x mod p **/
long long modPow(long long a, long long x, long long p) {
    long long res = 1;
    while (x > 0) {
        if (x & 1)
            res = (res * a) % p;
        a = (a * a) % p;
        x >>= 1;
    }
    return res;
}

/** return modular multiplicative of: a mod p, assuming p is prime **/
long long modInverse(long long a, long long p) {
    return modPow(a, p - 2, p);
}

int main() {
    long long n, m, ans = 0;
    cin >> n >> m;
    
    if (m > n) {
        ans += (m - n) * n;
        m = n;
    }
    
    for (long long i = 2; i < 3000000; i++) {
        long long x = n;
        x = x / i + 1;
        
        if (x > m) continue;
        
        long long u = mulmod((n % x), (m - x + 1), MOD);
        long long v = mulmod((m - x + 1), (m - x), MOD);
        long long w = mulmod(v / 2, (i - 1), MOD);
        
        ans += u - w + MOD;
        m = x - 1;
        ans = ans % MOD;
    }
    
    for (long long i = 1; i < m + 1; i++) ans += (n % i);
    
    cout << ans % MOD << endl;
    
    return 0;
}
