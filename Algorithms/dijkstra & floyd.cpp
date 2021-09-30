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
using namespace std;

#define INF 99999
int num;
int graph[10000][10000];

int shpath(int dist[], bool sptSet[]) {
    int min = INT_MAX, idx;

    for (int i = 0; i < num; i++) {
        if (sptSet[i] == false && dist[i] <= min) {
            min = dist[i], idx = i;
        }
    }
    return idx;
}

void dijkstra(int src) {
    int dist[num];
    bool st[num];
    for (int i = 0; i < num; i++) {
        dist[i] = INT_MAX, st[i] = false;
    }

    dist[src] = 0;

    for (int count = 0; count < num - 1; count++) {
        int u = shpath(dist, st);

        st[u] = true;

        for (int i = 0; i < num; i++) {
            if (!st[i] && graph[u][i] && dist[u] != INT_MAX && dist[u] + graph[u][i] < dist[i]) {
                dist[i] = dist[u] + graph[u][i];
            }
        }
    }

    // output
    for (int i = 0; i < num; i++) {
        cout << "node " << src << " to node " << i <<  " : ";
        
        if (dist[i] == INF) cout << -1 << endl;
        else cout << dist[i] << endl;
    }
}


vector<vector<int>> floydWarshall(vector<vector<int>> matrix, int num) {

    vector<vector<int>> result(num);
    for (int i = 0; i < num; i++){
        for( int j = 0; j< num; j++){
            result[i].push_back(matrix[i][j]);
        }
    }
    for (int i = 0; i < num; i++) {
    for (int j = 0; j < num; j++) {
            for (int k = 0; k < num; k++) {
                if (result[j][k] > (result[j][i] + result[i][k]) && (result[i][k] != INF && result[j][i] != INF)) result[j][k] = result[j][i] + result[i][k];
      }
    }
  }
    return result ;
}

int main() {
    cin >> num;

    vector<vector<int>> matrix(num);
    vector<vector<int>> floyd(num);

    for (int i=0; i<num; i++){
        for (int j = 0; j< num; j++){
            int n;
            cin >> n;
            if (n == -1) matrix[i].push_back(INF);
            else matrix[i].push_back(n);

      if (n == -1) graph[i][j] = INF;
            else graph[i][j] = n;
        }
    }
  floyd = floydWarshall(matrix, num);

    cout << endl;

  // dijkstra output
    for(int i = 0; i < num; i++) {
        dijkstra(i);
    }

  cout << endl;
  // floyd output
    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            if (floyd[i][j] == INF) cout << -1 << " ";
            else cout << floyd[i][j] << " ";
        }
        cout << endl;
    }
  return 0;
}
