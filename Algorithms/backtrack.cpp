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

int m, n;
vector<vector<int>> laberinto;

void print(vector<vector<int>> ans) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

bool possible(vector<vector<int>> ans, int i, int j) {
    if(i >= m || j >= n || i < 0 || j < 0) return false;
    
    if(laberinto[i][j] == 0 || ans[i][j]) return false;
    
    return 1;
}

void backtrack(vector<vector<int>> ans, int ren, int col) {
    ans[ren][col] = 1;
    if (ren == m - 1 && col == n-1) {
        print(ans);
        return;
    }
    
    if(possible(ans, ren - 1, col)) backtrack(ans, ren - 1, col);
    if(possible(ans, ren + 1, col)) backtrack(ans, ren + 1, col);
    if(possible(ans, ren, col + 1)) backtrack(ans, ren, col + 1);
    if(possible(ans, ren, col - 1)) backtrack(ans, ren, col - 1);
}

int main() {
    cin >> m >> n;
    vector<vector<int>> ans(m, vector<int>(n, 0));
    
    laberinto.resize(m);
    for (int i = 0; i < n; ++i)
        laberinto[i].resize(n);
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> laberinto[i][j];
        }
    }
    
    backtrack(ans, 0, 0);

    return 0;
}
