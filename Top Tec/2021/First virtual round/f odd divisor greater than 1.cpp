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

string solve(ll n) {
    int i = 0;
    while(n > 0) {
        if(n & 1) i++;
        n >>= 1;
    }
    return (i == 1 ? "No" : "Yes");
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        
        cout << solve(n) << endl;
        
    }
    return 0;
}
// le princessval template
