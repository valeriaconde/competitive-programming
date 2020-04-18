#include <iostream>
#include <vector>
using namespace std;

vector<int> indexes;
  
void getZarr(string str, int Z[]);
  
void search(string text, string pattern) {
    
    string concat = pattern + "$" + text;
    int l = concat.length();
  
    
    int Z[l];
    getZarr(concat, Z);
  
    for (int i = 0; i < l; ++i) {
        if (Z[i] == pattern.length()) indexes.push_back(i - pattern.length() -1);
    }
}
  
void getZarr(string str, int Z[]){
    int n = str.length();
    int L, R, k;
  
    L = R = 0;
    for (int i = 1; i < n; ++i){
        if (i > R){
            L = R = i;
  
            while (R<n && str[R-L] == str[R])
                R++;
            Z[i] = R-L;
            R--;
        } else {
            k = i-L;
  
            if (Z[k] < R-i+1) {
                Z[i] = Z[k];
            } else {
                L = i;
                while (R<n && str[R-L] == str[R])
                    R++;
                Z[i] = R-L;
                R--;
            }
        }
    }
}
  
int main() {
    int t;
    cin >> t;
    
    while(t > 0) {
        string a, b;
        cin >> a >> b;
        indexes.clear();
        
        search(a, b);
        
        if(indexes.empty()){
            cout << "Not Found" << endl;
        } else {
            cout << indexes.size() << endl;
            for(int i = 0; i < indexes.size(); i++){
                cout << indexes[i] + 1 << " ";
            }
            cout << endl;
        }
        
        cout << endl;
        t--;
    }

    return 0;
}
