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
    int t;
    cin >> t;
    
    while(t > 0) {
        int n, contpares = 0, contimpares = 0;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if(x % 2 != i % 2) {
                if (i%2 == 0) {
                    contpares++;
                } else {
                    contimpares++;
                }
            }
        }
        
        if (contimpares != contpares) {
            cout << -1 << endl;
        } else {
            cout << contimpares << endl;
        }
        t--;
    }

    return 0;
}
// le princessval template
