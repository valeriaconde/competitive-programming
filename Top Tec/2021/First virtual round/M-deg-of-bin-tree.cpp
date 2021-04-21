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

void solve(vector<int>ar, vector<int> &niv, int l, int r, int curr) {
    if(l > r) return;
    
    int mx = ar[l], posMX = l;
    
    for(int i = l; i <= r; i++) {
        if(ar[i] > mx) {
            mx = ar[i];
            posMX = i;
        }
    }
    
    niv[posMX] = curr;
    solve(ar, niv, l, posMX - 1, curr + 1);
    solve(ar, niv, posMX + 1, r, curr + 1);
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> ar, niv(n, 0);
        
        // input
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            ar.push_back(x-1);
        }
        
        solve(ar, niv, 0, n-1, 0);
        
        //output
        for(int i = 0; i < n; i++) {
            cout << niv[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// le princessval template

