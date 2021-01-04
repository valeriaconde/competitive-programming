// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#define MOD 1000000007
using namespace std;
typedef long long ll;

bool areRotations(string str1, string str2)
{
   if (str1.length() != str2.length())
        return false;
  string temp = str1 + str1;
  return (temp.find(str2) != string::npos);
}


int main() {
    int n;
    cin >> n;
    
    int tmp = n;
    string s;
    vector<string> p;

    while(n--) {
        cin >> s;
        p.push_back(s);
    }

  map<string, bool> vis;
  int ans = 0;
  for(int i = 0; i < tmp; i++) {
    if(vis[p[i]]) continue;
    for(int j = i + 1; j < tmp; j++) {
      if (!vis[p[j]] && areRotations(p[i],p[j])){
        vis[p[j]] = true;
      }
    }
    vis[p[i]] = true;
    ans++;
  }
  
  // 7 word icpc rdwo dwor ordw pcic ccpi

cout << ans << endl;
    return 0;
}
