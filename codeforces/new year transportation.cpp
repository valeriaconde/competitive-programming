// la princessval
// arrancandolo con altura
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits.h>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <utility>
#include <vector>
#define MOD 1000000007
#define LLMAX 9223372036854775807LL
using namespace std;
typedef long long ll;

map<int, bool> visited;

void visit(vector<vector<int>>& graph, int node) {
      visited[node] = 1;

      for(int c : graph[node]) {
        if(!visited[c]) visit(graph, c);
      }
}

int main() {
    int n, t;
    cin >> n >> t;
    vector<vector<int>> lw(n);
    
    //fill graph with connections
    for(int i = 0; i < n-1; i++) {
        int x; cin >> x;
        lw[i].push_back(i+x);
    }

    //prints graph
    /*
     for(int i = 0; i < n; i++) {
        for(int c : lw[i]) {
            cout << i << " , " << c << endl;
        }
    }
     */
    
    visit(lw, 0);

    if(visited[t-1]) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
