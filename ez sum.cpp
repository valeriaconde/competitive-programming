// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#define MOD 1000000007
using namespace std;
typedef long long ll;

int main() {
    ll w, n;
    cin >> w >> n;
    ll sum = 0;
    while(n > 0) {
        ll x, y;
        cin >> x >> y;
        sum += (x*y);
        n--;
    }
    
    cout << sum / w << endl;

    return 0;
}
// le princessval template
