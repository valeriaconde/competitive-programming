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

int perm[] = {0, 5, 3, 2, 4, 1};

int main() {
    int a;
    cin >> a;
    
    string ans(6, '0');
    
    string binary = bitset<6>(a).to_string(); //to binary
    
    for(int i = 0; i < 6; i++){
        ans[perm[i]] = binary[i];
    }
    
    int res = 0;
    for(int i = 5; i >= 0; i--){
        if(ans[i] == '1') res += (1 << 5 - i);
    }
    cout << res << endl;
    return 0;
}
