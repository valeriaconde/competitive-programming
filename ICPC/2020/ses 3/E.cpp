#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#define MOD 1000000007
#include <set>
using namespace std;
typedef long long ll;
map<ll, ll> mp;

int main(){
  ll n, b;
  cin >> n >> b;
  vector<ll> p;
  ll s;
  while(n--) {
    cin >> s;
    p.push_back(s);       
  }
  vector<ll> ans;
  n = p.size();
  set<ll> u;
  for(ll i = 0; i < n; i++){
    if (p[i] == 0){
      ans.push_back(0);
      continue;
    }
    ll r = p[(i + 1) % n];
    ll l = p[(i - 1 + n) %n];
      
    ll nmin = min(l, r);
    ll nmax = max(l, r);
    
    if (p[i] < nmin){
      ans.push_back(1);
    }
    else if (p[i] > nmax){
      ans.push_back(nmax+1);
    }
    else if(p[i] == nmin){
      ans.push_back(nmin);
    }
    else if(p[i] == nmax){
      ans.push_back(nmax);
    }
    else{
      ans.push_back(nmin+1);
    }
  }

  vector<ll> tmp;
  do {
    tmp = ans;
    p = ans;
    ans.clear();
    for(ll i = 0; i < n; i++){
    if (p[i] == 0){
      ans.push_back(0);
      continue;
    }
    ll r = p[(i + 1) % n];
    ll l = p[(i - 1 + n) %n];
      
    ll nmin = min(l, r);
    ll nmax = max(l, r);
    
    if (p[i] < nmin){
      ans.push_back(1);
    }
    else if (p[i] > nmax){
      ans.push_back(nmax+1);
    }
    else if(p[i] == nmin){
      ans.push_back(nmin);
    }
    else if(p[i] == nmax){
      ans.push_back(nmax);
    }
    else{
      ans.push_back(nmin+1);
    }
  }
  } while(tmp != ans);
  
  for(auto it : ans) {
    if(it != 0) u.insert(it);
  }

  ll cont = 1;
  for(auto it : u){
    if (it != 0) {
      mp[it] = cont;
      cont++;
    }
  }

  for(ll j = 0; j < n; j++){
    if(ans[j] == 0){
      cout << 0 << " ";
    }
    else{
      cout << mp[ans[j]] * b << " ";
    }
  }
  return 0;
}