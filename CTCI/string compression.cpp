#include <iostream>
using namespace std;

string compress(string s) {
    int ant = s[0], cont = 1;
    string ans = "";
 
    // read the letter im in
    // ask is it the same as the one before?
    // if yes, move counter until it isnt and count
    // push letter and counter
    // if not, counter starts here now
    // push letter and counter
    // sexo?
    
    for (int i = 1; i < s.size(); i++) {
        if(s[i]==s[ant]) {
            cont++;
        } else {
            ans += s[ant];
            ans += to_string(cont);
            cont = 1;
            ant = s[i];
        }
    }
    return ans;
}


int main() {
    string s;
    cin >> s;
    
    cout << compress(s) << endl;
    
    return 0;
}
