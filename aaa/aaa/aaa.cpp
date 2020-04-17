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
    string s;
    cin >> s;

    cout << s[0];
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '-') cout << s[i+1];
    }
    
    return 0;
}
// le princessval template
