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
    while(i * 2020 <= n) {
        ll comp = n - i * 2020;
        if(comp % 2021 == 0) return "yes";
        i++;
    }
    return "no";
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
