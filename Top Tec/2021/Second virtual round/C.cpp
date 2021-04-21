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

int fastPow(int x, int n) {
    int ret = 1;
    while (n) {
        if (n & 1) ret *= x;
        x *= x;
        n >>= 1;
    }
    return ret;
}

int main() {
    int b, k, even = 1;
    cin >> b >> k;
    
    while(k--) {
        int x; cin >> x;
        int tmp = (x * fastPow(b, k)) % 2;
        if(even) { if(tmp & 1) even = !even; } else { if(tmp & 1) even = !even; }
    }
    cout << (even ? "eVeN" : "oDd") << endl;
    
    return 0;
}
// le princessval template

