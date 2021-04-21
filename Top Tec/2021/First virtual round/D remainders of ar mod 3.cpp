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

int r[3];

int solve(vector<int> &ar) {
    for(int i = 0; i < 3; i++) r[i] = 0;
    
    for(int i = 0; i <ar.size(); i++) {
        if (ar[i] % 3 == 0) r[0]++;
        if (ar[i] % 3 == 1) r[1]++;
        if (ar[i] % 3 == 2) r[2]++;
    }
    
    int target = (int) ar.size() / 3;
    int ans = 0;
    
    for(int i = 0; i < 6; i++) {
        if(r[i % 3] > target) {
            ans += r[i % 3] - target;
            r[(i + 1) % 3] += r[i % 3] - target;
            r[i % 3] = target;
        }
    }
    
    return ans;
}

int main() {
    int t;
    cin >> t;
    
    while(t > 0) {
        int n;
        cin >> n;
        vector<int> ar;
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            ar.push_back(x);
        }

        
        cout << solve(ar) << endl;
        t--;
    }

    return 0;
}
// le princessval template

// vim linkedlist.cpp
// g++ -o linked linkedlist.cpp
// ./linked
// esc :wq
