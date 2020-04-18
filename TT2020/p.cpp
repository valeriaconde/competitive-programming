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

#define MAXN 10
#define MOD 1000000007

int main() {
    int T, N, M;
    vector<int> primes;
    primes.push_back(2);

    for (int i = 3; i <= 32000; i += 2) {
        bool isprime = true;
        int maxi = sqrt(i) + 1;
        
        for(int p : primes) {
            if(p >= maxi) break;
            if(i % p == 0) {
                isprime = false;
                break;
            }
        }
        
        if (isprime) primes.push_back(i);
    }

    cin >> T;

    while(T) {
        cin >> M >> N;
        if (M < 2) M = 2;

        int cap = sqrt(N) + 1;

        set<int> notprime;
        notprime.clear();

        for(int p : primes) {
            if (p >= cap) break;
            int start;

            if (p >= M) start = p * 2;
            else start = M + ((p - M % p) % p);

            for (int j = start; j <= N; j += p) {
                notprime.insert(j);
            }
        }

        for (int i = M; i <= N; i++) {
            if (notprime.count(i) == 0) {
                cout << i << endl;
            }
        }
        T--;
        cout << endl;
    }
    return 0;
}
