#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_set>
#define MOD 1000000007
using namespace std;
typedef long long ll;

int l, c; 
unordered_set<int> mat[40][40];
char chars[40][40];

bool mapsEqual(map<char, int>& l, map<char, int>& r) {
  for(char c = 'A'; c <= 'Z'; c++) {
    if(l[c] != r[c]) return false;
  }
  return true;
}

void check(string s, int idx) {
  map<char, int> mp;
  int sz = (int) s.size();
  for(int i = 0; i < sz; i++) {
    mp[s[i]]++;
  }

  map<char, int> mapaTmp;
  for(int i = 0; i < l; i++) {
    for(int j = 0; j < c; j++) {
      // search hor
      for(int k = j; k < j + sz; k++) {
        if(k >= c) break;
        mapaTmp[chars[i][k]]++;
      }
      if(mapsEqual(mp, mapaTmp)) {
        for(int k = j; k < j + sz; k++) {
          if(k >= c) break;
          mat[i][k].insert(idx);
        }
      }
      mapaTmp.clear();

      // search vert
      for(int k = i; k < i + sz; k++) {
        if(k >= l) break;
        mapaTmp[chars[k][j]]++;
      }

      if(mapsEqual(mp, mapaTmp)) {
        for(int k = i; k < i + sz; k++) {
          if(k >= l) break;
          mat[k][j].insert(idx);
        }
      }
      mapaTmp.clear();

      //search diagonal down
      for(int ren = i, col = j; ren < i + sz && col < j + sz; ren++, col++) {
        if(ren >= l || col >= c) break;
        mapaTmp[chars[ren][col]]++;
      }

      if(mapsEqual(mp, mapaTmp)) {
        for(int ren = i, col = j; ren < i + sz && col < j + sz; ren++, col++) {
          if(ren >= l || col >= c) break;
          mat[ren][col].insert(idx);
        }
      }
      mapaTmp.clear();

      // search diagonal up
      for(int ren = i, col = j; ren > i - sz && col < j + sz; ren--, col++) {
        if(ren < 0 || col >= c) break;
        mapaTmp[chars[ren][col]]++;
      }

      if(mapsEqual(mp, mapaTmp)) {
        for(int ren = i, col = j; ren > i - sz && col < j + sz; ren--, col++) {
          if(ren < 0 || col >= c) break;
          mat[ren][col].insert(idx);
        }
      }
      mapaTmp.clear();
    }
  }
}

int main() {
  cin >> l >> c;
  
  int ans = 0;

  for(int i = 0; i < l; i++) {
    for(int j = 0; j < c; j++) {
      cin >> chars[i][j];
    }  
  }

  int n; cin >> n;
  for(int i = 0; i < n; i++) {
    string s; cin >> s;
    check(s, i);
  }

  for(int i = 0; i < l; i++) {
    for(int j = 0; j < c; j++) {
      if(mat[i][j].size() > 1) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}