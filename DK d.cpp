// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#define MOD 1000000007LL
using namespace std;
typedef long long ll;

/** return a^x mod p **/
ll modPow(ll a, ll x, ll p) {
    ll res = 1;
    while (x > 0) {
        if (x & 1)
            res = (res * a) % p;
        a = (a * a) % p;
        x >>= 1;
    }
    return res;
}

/** return modular multiplicative of: a mod p, assuming p is prime **/
ll modInverse(ll a, ll p) {
    return modPow(a, p - 2, p);
}

ll mulmod(ll a, ll b, ll c) { // returns (a * b) % c, and minimize overflow
    ll x = 0, y = a % c;
    while (b) {
        if (b & 1) x = (x + y) % c;
        y = (y<<1) % c;
        b >>= 1;
    }
    return x % c;
}

ll solve(ll n) {
    ll a = mulmod(n, n + 1, MOD);
    ll b = (mulmod(2, n, MOD) + 1) % MOD;
    ll c = mulmod(a, b, MOD);
    ll inv = modInverse(3, MOD);
    return mulmod(c, inv, MOD);
}

int main() {
    long long n;
    cin >> n;
    
    ll L = round(sqrt(n)) - 1;
    ll sum = solve(L % MOD) % MOD;
    //cout << sum << endl;
    ll sig = (L + 1) % MOD;
    //ll mini = sig * sig - sig + 1;
    ll mini = (mulmod(sig, sig, MOD) + MOD - sig + 1) % MOD;
    cout << (sum + mulmod(sig, (n - mini + 1 + MOD) % MOD, MOD)) % MOD;
   // cout << sum + sig * (n - mini + 1) << endl;

    return 0;
}
// le princessval template
