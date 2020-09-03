#include <iostream>
using namespace std;

//*
//**
//*
//**

//    *
//   **
//  *
// **


int main() {
  int n;
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    for(int j = 0; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  
  int sp = n;
  for(int i =0; i < n; i++) {
    for(int j = sp; j > 0 ; j--) {
      cout << " ";
    }
    for(int k=0; k<=i ; k++) {
      cout<< "*";
    }
    sp--;
    cout<<endl;
  }
  

    
    return 0;
}
