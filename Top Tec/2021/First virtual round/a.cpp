// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
#define MOD 1000000007
using namespace std;
typedef long long ll;

string solve(string s) {
    int sz = (int) s.size();
    char fst = s[0], lst = s[sz-1], missing;
    int fcont = 0, lcont = 0;
    stack<char> st;
    
    if(fst == lst) return "NO";
    
    for(int i = 0; i < sz; i++) {
        if(s[i] == fst) {
            fcont++;
            s[i] = '(';
        }
        else if (s[i] == lst) {
            lcont++;
            s[i] = ')';
        }
    }
    
    if(!(fcont == sz / 2 || lcont == sz / 2)) return "NO";
    
    missing = fcont < lcont ? '(' : ')';
    
    // mod letter
    for(int i = 0; i < sz; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] = missing;
    }
    
    for(int i = 0; i < sz; i++) {
        if (s[i] == '(') st.push(s[i]);
        else {
            if (st.empty()) return "NO";
            else st.pop();
        }
    }
    
    if (st.empty()) return "YES";
    return "NO";
}

int main() {
    int t;
    cin >> t;
    
    
    while(t > 0) {
        string a;
        cin >> a;
        cout << solve(a) << endl;
        
        t--;
        
    }
    
    return 0;
}
// por favor que si jale
