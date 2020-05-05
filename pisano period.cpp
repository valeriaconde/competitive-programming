//
//  main.cpp
//  pisano period
//
//  Created by Valeria Conde on 30/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//


//compute 𝐹𝑛 modulo 𝑚, where 𝑛 may be really huge: up to 10^14
#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

vector<ll> period {0, 1};

ll pisanoLength(ll f, ll mod) {
    int cont = 0;
    int anterior = 0;
    int actual = 1;
    while(cont < 2) {
        int num = (anterior + actual) % mod;
        period.push_back(num);
        anterior = actual;
        actual = num;
        if (anterior == 0 && actual == 1) cont++;
    }
    return period.size() - 2;
}

int main() {
    ll n, m;
    cin >> n >> m;
    int num = n % pisanoLength(n, m);
    cout << period[num] << endl;
    return 0;
}

