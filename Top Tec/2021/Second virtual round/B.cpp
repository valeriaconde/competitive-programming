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
    int n; cin >> n;
    int pos = 0, neg = 0, half = (n+1)/2;
    while(n--) {
        int x; cin >> x;
        if (x > 0) pos++;
        else if (x < 0) neg++;
    }
    
    if(pos >= half) cout << 1 << endl;
    else if(neg >= half) cout << -1 << endl;
    else cout << 0 << endl;
    
    return 0;
}
// le princessval template

