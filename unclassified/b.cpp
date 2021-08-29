#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits.h>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <utility>
#include <vector>

#define PI 3.141592653589793
#define EPS 0.000000001
#define INF 1000000000

#define _ ios_base::sync_with_stdio(0), cin.tie(0), cin.tie(0), cout.tie(0), cout.precision(15);
#define FOR(i, a, b) for(int i=int(a); i<int(b); i++)
#define RFOR(i, a, b) for(int i=int(a)-1; i>=int(b); i--)
#define FORC(cont, it) for(typeof((cont).begin()) it = (cont).begin(); it != (cont).end(); it++)
#define RFORC(cont, it) for(typeof((cont).rbegin()) it = (cont).rbegin(); it != (cont).rend(); it++)
#define pb push_back
#define endl '\n'
#define all(x) x.begin(),x.end()

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vl;

#define MAXN 10
#define MOD 1000000007

// ********************************  IS PRIME()   *****************************************
//Para TODOS los primos

ll mulmod(ll a, ll b, ll c) { // returns (a * b) % c, and minimize overflow
    ll x = 0, y = a % c;
    while (b) {
        if (b & 1) x = (x + y) % c;
        y = (y<<1) % c;
        b >>= 1;
    }
    return x % c;
}

ll fastPow(ll x, ll n, ll c) { // returns (a ** b) % c, and minimize overflow
    ll ret = 1;
    while (n) {
        if (n & 1) ret = mulmod(ret, x, c);
        x = mulmod(x, x, c);
        n >>= 1;
    }
    return ret;
}

// Miller-Rabin primality test
bool miller(ll n, ll d){
    ll a = 2 + rand() % (n - 4);
    ll x = fastPow(a, d, n);
    if(x == 1 || x == n - 1)
        return true;
    while(d < n - 1){
        x = mulmod(x, x, n);
        if(x == 1)
            return false;
        if(x == n - 1)
            return true;
        d <<= 1;
    }
    return false;
}

const int k = 7;
bool isPrime(ll n){
    if(n == 3 || n == 2)
        return true;
    if(n == 1 || n % 2 == 0)
        return false;
    ll d = n - 1;
    while(d % 2 == 0)
        d >>= 1;
    for(int i = 0; i < k; i++){
        if(!miller(n, d))
            return false;
    }
    return true;
}

// ****************************************************************************************


// ********************************  GET PRIME FACTORS()   ********************************
/**
 Devuele los factores primos de un numero. No olvidar hacer unique para quitar repetidos
 int tamano = unique(factors.begin(), factors.end()) - factors.begin();
**/

ll A, B;
vl factors;

ll f(ll x, ll n) {
    return (mulmod(x, (x + A), n) + B) % n;
}

ll gcd(ll a, ll b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
   
    // base case
    if (a == b)
        return a;
   
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

void pollardRho(ll n) {
    if (n == 1) return;
    if (isPrime(n)) {
        factors.pb(n);
        return;
    }
    ll d = n, x, y;
    while(d == n) {
        d = 1;
        x = y = 2;
        A = 2 + rand() % (n - 2);
        B = 2 + rand() % (n - 2);

        while (d == 1) {
            x = f(x, n);
            y = f(f(y, n), n);
            d = gcd(abs(x - y), n);
        }
    }

    if (n / d != d)
        pollardRho(n / d);
    pollardRho(d);
}

int main() {
    int a;
    cin >> a;
    pollardRho(a);
    
    sort( factors.begin(), factors.end() );
    factors.erase( unique( factors.begin(), factors.end() ), factors.end() );
    for(auto it : factors){
        cout << it;
    }
    return 0;
}
