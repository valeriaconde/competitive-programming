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

bool isPerfCube(ll princessval) {
    ll lo = 1, hi = 10000;
    
    while(lo <= hi) {
        ll mid = (hi + lo) / 2;
        
        if(mid * mid * mid == princessval) return 1;
        else if (princessval > mid * mid * mid) lo = mid + 1;
        else hi = mid - 1;
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll i = 1;
        bool found = 0;
        
        while(i * i * i < n && !found) {
            if(isPerfCube(n-i*i*i)) {
                found = 1;
            }
            i++;
        }
        if (found) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}
// le princessval template
