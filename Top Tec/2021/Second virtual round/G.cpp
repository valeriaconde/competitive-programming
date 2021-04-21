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

int n, k;
set<int> ar;
vector<int> ans;

int main() {
    cin >> n >> k;
    
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(ar.find(x) == ar.end()) {
          ar.insert(x);
          ans.push_back(i+1);
        }
    }

    if (ar.size() >= k) {
      cout << "YES" << endl;
      for(int i = 0; i < k; i++) {
        cout << ans[i] << " ";
      }
    } else cout << "NO" << endl;
 
    
    return 0;
}
// le princessval template

