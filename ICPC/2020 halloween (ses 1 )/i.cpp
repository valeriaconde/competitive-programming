#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#define MOD 1000000007
using namespace std;
typedef long long ll;

bool isNumber(char& c) {
  return c >= '0' && c <= '9';
}

int main() {
    int t;
    cin >> t;
    

    for(int j = 1; j <= t; j++) {
        string s;
        cin >> s;

        int rcont = 0;

        bool hasSp = 0;
        bool lower = 0;
        bool upper = 0;
        bool hasNum = 0;
        bool hasConsec = 0;
        bool ruleSp = 0;
        bool has10 = 0;

        for(int i = 0; i < s.size(); i++) {
          if(s[i] == '.' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '/' || s[i] == '(' || s[i] == '&' || s[i] == ')') {
            hasSp = 1;
          }
          if(s[i] >= 'a' && s[i] <= 'z') lower = 1;
          if(s[i] >= 'A' && s[i] <= 'Z') upper = 1;

          if(isNumber(s[i])) hasNum = 1;

          if(i > 0 && isNumber(s[i]) && isNumber(s[i-1]) && abs(s[i]-s[i-1]) == 1) hasConsec = 1;
        }
        ruleSp = hasNum && !hasConsec;

        has10 = s.size() >= 10 ? 1 : 0;

        if (hasSp == 1) rcont++;
        if (lower == 1) rcont++;
        if (upper == 1) rcont++;
        if (ruleSp == 1) rcont++;
        if (has10 == 1) rcont++;


        cout << "Assertion number #" << j << ": ";
        if (rcont == 5) cout << "Strong" << endl;
        else if (rcont == 4) cout << "Good" << endl;
        else if (rcont == 3) cout << "Weak" << endl;
        else if (rcont < 3) cout << "Rejected" << endl;
    }

    return 0;
}