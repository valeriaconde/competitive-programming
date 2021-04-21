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
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> ar, dp(n, 0);
        
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            ar.push_back(x);
        }
        
        for(int i = n-1; i >= 0; i--) {
            if(i + ar[i] > n-1) dp[i] = ar[i];
            else dp[i] = ar[i] + dp[i+ar[i]];
        }
        
        sort(dp.begin(), dp.end());
        cout << dp[n-1] << endl;
    }
    return 0;
}
// le princessval template



