#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#define MOD 1000000007
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;


    bool leftServe = 1;
    bool leftWon = 0, gameFinished = 0;
    int juegosLeft = 0, juegosRight = 0, PL = 0, PR = 0;
    
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == 'S') {
        if(leftServe) {
          PL++;
        }
        else {
          PR++;
        }

      } else if (s[i] == 'R') {
          if(leftServe) {
            PR++;
            leftServe = 0;
          }
          else {
            PL++;
            leftServe = 1;
          }

      }

      // gano game?
      if ((max(PL, PR) >= 5 && abs(PL-PR) >= 2) || max(PL, PR) == 10) {
        if(PL > PR) juegosLeft++;
        else juegosRight++;
        PL = 0;
        PR = 0;
      }

      // gamo match?
      if(juegosLeft >= 2) {
        gameFinished = 1;
        leftWon = 1;
      } else if (juegosRight >= 2) {
        gameFinished = 1;
        leftWon = 0;
      }

      if(s[i] == 'Q') {
        if(gameFinished) {
          cout << juegosLeft << " ";
          if(leftWon) cout << "(winner) ";
          cout << "- " << juegosRight << " ";
          if(!leftWon) cout << "(winner)";
          cout << endl;
        } else {
          cout << juegosLeft << " (" << PL;
          if(leftServe) cout << "*";
          cout << ") - " << juegosRight << " (" << PR;
          if(!leftServe) cout << "*";
          cout << ")" << endl;
        }
      }

    }
    

    return 0;
}