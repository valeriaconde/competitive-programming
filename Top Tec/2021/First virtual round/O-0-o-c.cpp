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

int ar[200001];

int main() {
    //ios_base::sync_with_stdio(0), cin.tie(0), cin.tie(0), cout.tie(0), cout.precision(15);
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int total = n;
        map<int, int> mp;
        set<int> repetitions;
        
        for(int i = 0; i < n; i++) {
            scanf("%d", &ar[i]);
            mp[ar[i]]++;
        }
        
        for (auto it : mp) {
            repetitions.insert(it.second);
        }
        
        for(auto c : repetitions) {
            int tmp = 0;
            for(auto i : mp) {
                if(c == i.second) continue;
                if(c < i.second) tmp += i.second - c;
                else if(c > i.second) tmp += i.second;
            }
            if (tmp < total) total = tmp;
        }
        printf("%d\n", total);
    }
    return 0;
}
// le princessval template

