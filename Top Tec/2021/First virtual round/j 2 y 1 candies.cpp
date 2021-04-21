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
        int n;
        cin >> n;
        
        int c1 = 0, c2 = 0;
        
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x == 1) c1++;
            else c2++;
        }
        
        if(c2 % 2 == 0 && c1 % 2 == 0) cout << "yEs" << endl;
        else if (c1 % 2 == 1) cout << "no" << endl;
        else if (c2 % 2 == 1) {
            if(c1 >= 2) cout << "yeS" << endl;
            else cout << "no" << endl;
        }
    }
    return 0;
}
// le princessval template

