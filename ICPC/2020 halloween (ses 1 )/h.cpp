// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#define MOD 1000000007
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    
    while(t > 0) {
        int n;
        cin >> n;
        vector<int> ar;
        vector<int> dp(n, 0);

        for(int i = 0; i < n; i++) {
          int x;
          cin >> x;
          ar.push_back(x);
        }

        if(n == 1) { cout << ar[0] << endl; }
        else if(n == 2) { cout << max(ar[0], ar[1]) << endl; }
        else if (n >= 3) {
          dp[0] = ar[0];
          dp[1] = max(ar[0], ar[1]);
          for(int i = 2;i < n; i++) {
            dp[i] = max(dp[i-1], dp[i-2] + ar[i]);
          }
        cout << dp[n-1] << endl;
        }
      
        t--;
    }

    return 0;
}
// le princessval template