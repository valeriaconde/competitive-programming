// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#define MOD 1000000007
using namespace std;
typedef long long ll;

string getMax(vector<string> &v) {
    vector<string> appended;
    sort(v.begin(), v.end());
    do {
        string tmp = "";
        for(string s : v) {
            tmp += s;
        }
        appended.push_back(tmp);
    } while(next_permutation(v.begin(), v.end()));
    return *max_element(appended.begin(), appended.end());
}

int main() {
    int n;
    vector<string> v;
    cin >> n;
    int lm = 0;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        lm = max(lm, (int)s.size());
        sort(s.begin(), s.end(), greater<char>());
        v.push_back(s);
    }
    
    
    if(lm == 1) {
        sort(v.begin(), v.end(), greater<>());
        for(string s : v) {
            cout << s;
        }
    } else {
        cout << getMax(v);
    }
    
    
    return 0;
}
// le princessval template
