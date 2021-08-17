#include <iostream>
#include <vector>
using namespace std;
/*
tacocat is Palindrome
valeria is not Palindrome
anna is Palindrome
ana is Palindrome
*/

// O(s)
bool isPalindrome(string s) {
  if(s.length() == 0) return 0;
  for(int i = 0, j = s.size()-1; i < s.size() / 2; i++, j--) {
    if(s[i] != s[j]) return 0;
  }
  return 1;
}

/*
input:
vector<string> arr = { "taco", "word", "bat", "tab", "cat", "a" };
output:
{"tacocat", "battab", "tabbat" }

*/
// O( s * n^2 )
// O(s^2 * n)
vector<string> output(vector<string> ar) {
  vector<string> output;
  for(int i = 0; i < ar.size(); i++) {
    for(int j = 0; j < ar.size(); j++) {
      string ans;
      if (i != j) {
        ans = ar[i] + ar[j];
        if(isPalindrome(ans)) {
          output.push_back(ans);
        }
      }
    }
  }
  return output;
}

int main() {
  vector<string> arr = { "taco", "word", "bat", "tab", "cat" };

  vector<string> ansVector = output(arr);

  for(int i = 0; i < ansVector.size(); i++) {
    cout << ansVector[i] << endl;
  }
   
  return 0;
} // 你好
