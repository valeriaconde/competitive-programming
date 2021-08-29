#include <iostream>
using namespace std;

class Node {
public:
	int val;
	Node* next;
	Node(int val) {
		this -> val = val;
		this->next= NULL;
	}
};

class LL {
public:
	Node* root;
	Node* last;
	int size;

	LL() {
		root = NULL;
		last = NULL;
		size = 0;
	}

	void push(int x) {
		Node* tmp = new Node(x);
		if (root == NULL) {
			root = tmp;
			last = tmp;
		} else {
			last->next=tmp;
			last=tmp;
		}
		size++;
	}

	void print() {
		if(size == 0) {
			cout << "empty" << endl;
		} else {
			Node* tmp = root
			while(tmp != NULL) {
				cout << tmp->val << " ";
				tmp = tmp->next;
			}
			cout << endl;
		}
	}
};

int main() {
	LL linked;
	linked.print();
	linked.push(5);
	linked.push(8);
	linked.push(7);
	linked.print();
	
	return 0;
}

