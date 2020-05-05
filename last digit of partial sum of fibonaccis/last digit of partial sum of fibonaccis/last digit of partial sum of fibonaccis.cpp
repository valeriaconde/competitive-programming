// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#define MOD 10
using namespace std;
typedef long long ll;

map<ll, ll> f;

ll fib(ll n) {
    if(n == 0) return 0;
    if(n == 1 || n == 2) return f[n] = 1;
    
    if(f[n]) return f[n];
    
    ll k = (n & 1) ? (n + 1) / 2 : n / 2;
    
    f[n] = (n & 1)? ((fib(k)*fib(k) % MOD) + (fib(k-1)*fib(k-1) % MOD))
    : (((2*fib(k-1) % MOD) + fib(k)) % MOD)*fib(k) % MOD;
    f[n] %= MOD;
    return f[n];
}

int main() {
    ll n , m;
    cin >> n >> m;
    cout << (fib(m + 2) - fib(n + 1) + MOD) % MOD << endl;
    return 0;
}
// le princessval template
