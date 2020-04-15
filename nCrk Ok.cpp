// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#define MOD 1000000007LL
using namespace std;
typedef long long ll;

ll inv[1000005];
ll fac[1000000005];

/** return a^x mod p **/
ll modPow(ll a, ll x, ll p) {
    ll ans = 1;
    while (x > 0) {
        // bitwise operator
        if (x & 1) ans = (ans * a) % p;
        a = (a * a) % p;
        x /= 2;
    }
    return ans;
}

// return modular multiplicative of: a mod p, assuming p is prime
ll modInverse(ll a, ll p) {
    return modPow(a, p - 2, p);
}

// return C(n,k) mod p, assuming p is prime
ll modBinomial(ll n, ll k) {
    return ((fac[n] * inv[k] % MOD) * inv[n - k]) % MOD;
}

int main() {
    inv[0] = 1;
    fac[0] = 1;
    for(int i = 1; i < 1000005; i++){
        fac[i] = (fac[i - 1] * i) % MOD;
        inv[i] = modInverse(fac[i], MOD) % MOD;
    }
    
    ll n, a, b, d;
    while (cin >> n >> a >> b >> d) {
        cout << (modPow(modBinomial(b, d), a, MOD) * modBinomial(n, a)) % MOD << endl;
    }
    return 0;
}
// le princessval template
