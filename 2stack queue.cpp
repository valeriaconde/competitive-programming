// la princessval
#include <iostream>
#include <stack>
using namespace std;

class Q {
private:
  stack<int> receive;
  stack<int> give;
public:

void push(int n) {
  receive.push(n);
}

void pop() {
  while (!receive.empty()) {
    give.push(receive.top());
    receive.pop();
  }

  give.pop();

  while(!give.empty()) {
    receive.push(give.top());
    give.pop();
  }
}

int size() {
  return receive.size();
}

bool empty() {
  return receive.empty();
}

int front() {
  while (!receive.empty()) {
    give.push(receive.top());
    receive.pop();
  }

  int top = give.top();

  while(!give.empty()) {
    receive.push(give.top());
    give.pop();
  }
  return top;
}
};


int main() {
  Q q;
  q.push(8);
  q.push(7);
  cout << q.front() << endl;
  q.pop();
  cout << q.front() << endl;
  cout << q.size() << endl;
}
