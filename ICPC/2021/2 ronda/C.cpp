#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;


int solve(string s) {
  string str = s+s;
  int stak = 0, n = str.length();
  bool found = false;
  int izq = 0, der = 0;

  while(!found && der < n) {
    while(stak < 0 && izq < der) {
      stak -= (str[izq] == 'B' ? 1 : -1);
      izq++;
    }

    while(der < n && stak >= 0) {
      stak += (str[der] == 'B' ? 1 : -1);
      der++;
      if(der - izq + 1 >= n/2 && stak >= 0) {
        found = 1;
        break;
      }
    }
  }

    if(found) return izq;
    return -1;
  
}

int main(){
  int t;
  cin >> t;
  while(t>0){
    string s; cin >> s;
    cout << solve(s) << endl;
    t--;
  }
}

// r r b b r r b b
// r b r b r b r b