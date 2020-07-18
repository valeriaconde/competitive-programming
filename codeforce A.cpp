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
        string s, ans = "";
        cin >> s;
        
        if (s.length() == 2) {
            ans = s;
        } else if (s.length() == 4) {
            ans += s.substr(0,2);
            ans += s[3];
        } else if (s.length() == 6) {
            ans += s.substr(0,2);
            ans += s.substr(4,2);
        } else {
            ans += s.substr(0,2);
            for (int i = 4; i < s.length() - 2; i+=2) {
                ans += s[i];
            }
            ans += s.substr(s.length()-2,2);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}
// le princessval template
