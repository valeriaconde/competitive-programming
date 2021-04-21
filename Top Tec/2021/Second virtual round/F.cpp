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
vector<int> ar;

int solve() {
    int ans = 0, i = 0, j = n-1;

    while(i <= j) {
        if(ar[i] > k && ar[j] > k) return ans;
        if (ar[i] <= k) {
            ans++;
            i++;
        }
        if(i < j && ar[j] <= k) {
            ans++;
            j--;
        }
    }
    return ans;
}

int main() {
    cin >> n >> k;
    
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        ar.push_back(x);
    }
    
    cout << solve() << endl;
    
    return 0;
}
// le princessval template

