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

string solve(int w, int h, ll n) {
    ll cont = 1;
    
    while (w % 2 == 0) {
        w /= 2;
        cont *= 2;
    }
    
    while (h % 2 == 0) {
        h /= 2;
        cont *= 2;
    }
    
    return (cont >= n ? "yEs" : "nO");
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int w, h;
        ll n;
        cin >> w >> h >> n;
        
        cout << solve(w, h, n) << endl;
        
    }
    return 0;
}
// le princessval template