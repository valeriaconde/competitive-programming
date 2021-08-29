// la princessval
// arrancandolo con altura
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_set>
#include <stack>
#define MOD 1000000007
#define LLMAX 9223372036854775807LL
using namespace std;
typedef long long ll;

vector<vector<int>> grafo;
map<int, bool> vis;


void visit(int node) {
  cout << node << endl;
  vis[node]=true;

  for(int c : grafo[node]) {
    if(!vis[c])
    visit(c);
  }  

}



int main() {
  int n;
  for(int i = 0; i < n; i++) {
    if(!vis[i]) visit(i);
  }

  return 0;
}

