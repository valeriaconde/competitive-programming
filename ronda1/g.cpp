//
//  main.cpp
//  g
//
//  Created by Valeria Conde on 30/03/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include<iostream>
#include<stack>
#include<locale>
using namespace std;

int optr(char c) {
   if(c == '+' || c == '-') {
      return 1;
   }else if(c == '*' || c == '/') {
      return 2;
   }else if(c == '^') {
      return 3;
   }else {
      return 0;
   }
}

string rpn(string infix ) {
   stack<char> stk;
   stk.push('#');
   string postfix = "";
   string::iterator it;

   for(it = infix.begin(); it!=infix.end(); it++) {
      if(isalnum(char(*it)))
         postfix += *it;
      else if(*it == '(')
         stk.push('(');
      else if(*it == '^')
         stk.push('^');
      else if(*it == ')') {
         while(stk.top() != '#' && stk.top() != '(') {
            postfix += stk.top();
            stk.pop();
         }
         stk.pop();
      }else {
         if(optr(*it) > optr(stk.top()))
            stk.push(*it);
         else {
            while(stk.top() != '#' && optr(*it) <= optr(stk.top())) {
               postfix += stk.top();
               stk.pop();
            }
            stk.push(*it);
         }
      }
   }
   while(stk.top() != '#') {
      postfix += stk.top();
      stk.pop();
   }
   return postfix;
}

int main() {
    int t;
    cin >> t;
    
    while (t > 0) {
        string str;
        cin >> str;
        cout << rpn(str) << endl;
        t--;
    }
    return 0;
}
