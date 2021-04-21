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

int wt = 2147483647, bs=0;

int main() {
    int n, t;
    cin >> n >> t;
    
    for(int i = 1; i <= n; i++) {
        int s, d, tmp;
        cin >> s >> d;
        
        if(s >= t) tmp = s-t;
        else {
            tmp = d-((t-s)%d);
            if(tmp == d) tmp = 0;
        }
        
        if (tmp < wt) {
            wt = tmp;
            bs = i;
        }
    }

    cout << bs << endl;
    
    return 0;
}
// le princessval template

