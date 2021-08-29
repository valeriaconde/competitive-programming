#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007

bool checkThree(string s){
    ll sum = 0;
    for (int i = 0; i < s.size(); ++i)
        sum += (s[i]-'0');
    return (sum % 3 == 0);
}

bool checkFour(string s){
    if (s.size() == 1)
        return ((s[0] - '0') % 4 == 0);
    int one = s[s.size() - 1], two = s[s.size() - 2];
    return (((two * 10)+ one) % 4 == 0);
}

// Riko Pollo
int main(){
    //ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    // freopen ("ans.txt", "w", stdout);
    while(t--){
        string s;
        cin >> s;
        vector<int> ans;
        int n = s.size()-1;
        bool c2 = false, c3 = false, check = false;
        if ((s[n]-'0') % 2 == 0){
            c2 = true;
            check = true;
            ans.push_back(2);
        }
        if(checkThree(s)){
            c3 = true;
            check = true;
            ans.push_back(3);
        }
        if (checkFour(s)){
            check = true;
            ans.push_back(4);
        }
        if (s[n] == '0' || s[n] == '5'){
            check = true;
            ans.push_back(5);
        }
        if (c2 && c3)
            ans.push_back(6);
        if (!check)
            cout << -1;
        else{
            for (int i = 0; i < ans.size(); ++i){
                if (i == ans.size() - 1)
                    cout << ans[i];
                else
                    cout << ans[i] << " ";
            }
        }
        cout << '\n';
    }
    // fclose(stdout);
    return 0;
}

