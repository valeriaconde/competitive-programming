#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <stdio.h>
#include <stdlib.h> 
#define MOD 1000000007
#define FOR(i, a, b) for(ll i=ll(a); i<ll(b); i++)
#define pb push_back
#define MAXN 1000000
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

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

int main() {
  string s;
  cin >> s;
  
  int cont = 0;
  int n = s.size();
  int ans = 1000000000;

  if(n < 3) cout << "Bob lies" << endl;
  else{
    for (int i = 0; i < n-2; i++){
      for (int j = i+1; j < n-1; j++){
        string s1 = s.substr(0, i+1);
        string s2 = s.substr(i+1, j-i);
        string s3 = s.substr(j+1);

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        sort(s3.begin(), s3.end());
      
        int p1 = -1, p2 = -1, p3 = -1;
        
        do{
          if (s1[0] == '0') continue;
          int x = stoi(s1);
          if(isPrime((ll) x)) {
            p1=x;
            break;
          }
        }while(next_permutation(s1.begin(), s1.end()));
        
        do {
          if (s2[0] == '0') continue;
          int x = stoi(s2);
          if(isPrime((ll) x)){
              p2 = x;
              break;
          }
        } while(next_permutation(s2.begin(), s2.end()));

        do{
          if (s3[0] == '0') continue;
          int x = stoi(s3);
          if(isPrime((ll) x)){
              p3 = x;
              break;
          }
        } while(next_permutation(s3.begin(), s3.end()));
        
        if(p1 != -1 && p2 != -1 && p3 != -1) ans = min(ans, p1 * p2 * p3);
      }
    }
  }
  
  if(ans == 1000000000) cout << "Bob lies" << endl;
  else cout << ans << endl;

  return 0;
}