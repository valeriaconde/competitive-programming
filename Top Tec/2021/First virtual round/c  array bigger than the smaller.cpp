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

int solve(vector<int> &ar) {
    int cont = 0;
    int mx, mn;
    for(int i = 1; i < ar.size(); i++) {
        mx = max(ar[i], ar[i-1]);
        mn = min(ar[i], ar[i-1]);
        while(mx > mn * 2) {
            mn *= 2;
            cont++;
        }
    }
    return cont;
}

int main() {
    int t;
    cin >> t;
    
    while(t > 0) {
        int n;
        cin >> n;
        vector<int> ar;
        
        for (int i = 0; i < n; i++) {
            int z;
            cin >> z;
            ar.push_back(z);
        }
        
        cout << solve(ar) << endl;
        
        t--;
    }

    return 0;
}
// le princessval template
