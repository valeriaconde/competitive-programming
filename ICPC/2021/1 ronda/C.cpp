#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_set>
#include <stack>
#include <stdio.h>
#include <string.h>
#define FOR(i, a, b) for(ll i=ll(a); i<ll(b); i++)
#define pb push_back
#define MAXN 1000005

// Amount of prime numbers between interval of two given numbers 

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

vi primes;

int arr[5] = {10, 11, 12, 13, 14};

using namespace std;

void Eratosthenes(){
    bool isPrime[MAXN];
    memset(isPrime, 0, sizeof(isPrime));
	FOR(i, 2, MAXN) {
	    if (!isPrime[i]) {
            primes.pb(i);
            for (int j = 2; j*i < MAXN; j++) {
                isPrime[i*j] = true;
            }
	    }
	}
}

bool isPrime(int n) {
    if (n <= 1)  return false;
    if (n <= 3)  return true;
   
    if (n%2 == 0 || n%3 == 0) return false;
   
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
   
    return true;
}

int nextPrime(int N) {
    if (N <= 1)
        return 2;
 
    int prime = N;
    bool found = false;
    
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
    return prime;
}

int binSearch(int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
  
        if (primes[mid] == x)
            return mid;
  
        if (primes[mid] > x)
            return binSearch(l, mid - 1, x);
  
        return binSearch(mid + 1, r, x);
    }
  
    return -1;
}


int main(){
    int t, i, j, ini, fin;
    cin >> t;
    Eratosthenes();
    
    while (t>0){
      cin >> i >> j;
      if(isPrime(i)) {
        ini = binSearch(0, primes.size()-1, i);
      }else{
        ini = binSearch(0, primes.size()-1, nextPrime(i));
      }

      if(isPrime(j)) {
        fin = binSearch(0, primes.size()-1, j);
      }else{
        fin = binSearch(0, primes.size()-1, nextPrime(j))-1;
      }

        cout << (fin-ini)+1 << endl;

        t--;
    }
}


