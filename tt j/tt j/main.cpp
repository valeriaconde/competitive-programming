//
//  main.cpp
//  tt j
//
//  Created by Valeria Conde on 14/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
typedef long long ll;
// la princessval
// arrancandolo con altura

map<long long, long long> mem;

long long solve(long long n) {
    if (n <= 2) return n;
    if (mem[n]) return mem[n];
    mem[n] = max(n, solve(n/2) + solve(n/3) + solve(n/4));
    return mem[n];
}

int main() {
    ll t;
    while(cin >> t) {
        cout << solve(t) << endl;
    }
    return 0;
}








