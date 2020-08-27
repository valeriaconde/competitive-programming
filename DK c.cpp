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
struct node {
    int diff, len, st, en;
    
    node() {
        len = 0;
    }
    
    node(int d, int l, int s, int e) {
        diff = d;
        len = l;
        st = s;
        en = e;
    }
};

int antiBeauty(map<char, int> &cnt) {
    int maxi = 0;
    int mini = 1000000000;
    
    for(auto it : cnt) {
        //cout << it.first << " " << it.second << endl;
        maxi = max(maxi, it.second);
        mini = min(mini, it.second);
    }
    return abs(maxi - mini);
}


int main() {
    string s;
    cin >> s;
    
    int x = s.length();
    
    map<int, node> memo;
    
    while(x >= 1) {
        map<char, int> cnt;
        cnt['R'] = cnt['G'] = cnt['B'] = cnt['Y'] = 0;
        int i = 0, d = 0;
        
        for(int k = 0; k < x; k++) {
            cnt[s[k]]++;
            d++;
        }
        
        int bt = antiBeauty(cnt);
       // cout << bt << endl;
        if(bt == 0) {
            cout << bt << " " << x << endl;
            cout << i + 1 << " " << d << endl;
            return 0;
        } else if(memo[bt].len < x) {
            memo[bt] = {bt, x, i, d};
        }
        
        while(d < (int)s.length() - 1) {
            cnt[s[i]]--;
            i++;
            cnt[s[d++]]++;
            
            bt = antiBeauty(cnt);
           // cout << bt << endl;
            if(bt == 0) {
                cout << bt << " " << x << endl;
                cout << i + 1 << " " << d << endl;
                return 0;
            } else if(memo[bt].len < x) {
                memo[bt] = {bt, x, i, d};
            }
        }
        
        x--;
    }
    
    for(auto it : memo) {
        cout << it.second.diff << " " << it.second.len << endl;
        cout << it.second.st + 1 << " " << it.second.en << endl;
        break;
    }

    return 0;
}

/*
 
 BBBB
 1 1
 
 BBBY
 1 2
 
 BBBYB
 1 2
 
 GGBBYY
 1 6
 
 RGGGRRRRBY
 
 
 */





// le princessval template
