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

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> ar;
        bool aliceTurn = 1;
        ll ascore = 0, bscore = 0;
        
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            ar.push_back(x);
        }
        
        sort(ar.begin(), ar.end(), greater<int>());
        
        for(int i = 0; i < n; i++) {
            if(aliceTurn) {
                if (ar[i] % 2 == 0) ascore += ar[i];
            } else if(!aliceTurn) {
                if (ar[i] % 2 == 1) bscore += ar[i];
            }
            aliceTurn = !aliceTurn;
        }
        
        if(ascore == bscore) cout << "Tie" << endl;
        else if(ascore > bscore) cout << "Alice" << endl;
        else cout << "Bob" << endl;
        
    }
    return 0;
}
// le princessval template

