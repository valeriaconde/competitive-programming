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

string solve(int n, int u, int r, int d, int l) {
    for(int i = 0; i <= 15; i++) {
        int uu = u, rr = r, dd = d, ltmp = l;
        if (i & 1) {
            uu--;
            ltmp--;
        }
        if(i & 2) {
            uu--;
            rr--;
        }
        if(i & 4) {
            dd--;
            ltmp--;
        }
        if(i & 8) {
            dd--;
            rr--;
        }
        if(uu >= 0 && rr >= 0 && dd >= 0 && ltmp >= 0 && uu <= n - 2 && rr <= n - 2 && dd <= n - 2 && ltmp <= n - 2 ) return "yEs";
    }
    return "nO";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, u, r, d, l;
        cin >> n >> u >> r >> d >> l;

        cout << solve(n, u, r, d, l) << endl;
        
    }
    return 0;
}
// le princessval template