#include <iostream>
#include <stack>
#include <queue>
using namespace std;

string pinchesPutaFuncion(string putaString) {
  string tuPincheRespuesta = "";
  stack<char> reversazo;
  for(int i = 0; i < putaString.size(); i++) {
    reversazo.push(putaString[i]);
  }

while (!reversazo.empty()) {
  tuPincheRespuesta += reversazo.top();
  reversazo.pop();
}
return tuPincheRespuesta;
}


// la princessval
int main() {
  string s;
  cin >> s;
  cout << pinchesPutaFuncion(s) << endl;
}

