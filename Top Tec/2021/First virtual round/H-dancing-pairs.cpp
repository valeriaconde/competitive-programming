// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
#include <stack>
#define MOD 1000000007
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a, b, k, tot = 0;
        cin >> a >> b >> k;
        vector<ll> ara, arb, dega(a+1, 0), degb(b+1, 0);;
        
        for(ll i = 0; i < k; i++) {
            ll x; cin >> x;
            ara.push_back(x);
        }
        
        for(ll i = 0; i < k; i++) {
            ll x; cin >> x;
            arb.push_back(x);
        }
        
        for(ll i = 0; i < k; i++) {
            dega[ara[i]]++;
            degb[arb[i]]++;
        }
        
        for(ll i = 0; i < k; i++) {
            tot += k - dega[ara[i]] - degb[arb[i]] + 1;
        }
        
        cout << tot / 2 << endl;
    }
    return 0;
}
// le princessval template

