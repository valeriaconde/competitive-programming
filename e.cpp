// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#include <string>
#define MOD 1000000007
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    int ans = n;
    for (int i = 2; i < n; i++) {
        for(int k = i; k < n; k++) {
            if (i * k <= n) {
                ans++;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
// le princessval template
