// la princessval
// arrancandolo con altura
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
#define MOD 1000000007
#define LLMAX 9223372036854775807LL
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        ll x, y; cin >> x >> y;
        ll dif = x - y;

        if(dif <= 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}
// le princessval template

