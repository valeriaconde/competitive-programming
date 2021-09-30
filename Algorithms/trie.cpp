#include <bits/stdc++.h>
using namespace std;

const int alphabet = 128; 

struct Node {
  struct Node* children[alphabet];
  bool isEndOfWord;
};

Node* getNode(){
	Node* tmp = new Node;
	
	tmp -> isEndOfWord = false;
	
	for (int i = 0; i<alphabet; i++){
		tmp->children[i] = NULL;
	}
	
	return tmp;
};

void ReadWords(Node* root, string word){
	struct Node *curr = root;

	for (int i = 0; i<word.size(); i++){
		int letter = word[i] - 'a';

		if (!curr->children[letter]) curr->children[letter] = getNode();

		curr = curr->children[letter];
	}

	curr -> isEndOfWord = true;
}

bool find(Node* root, string word) {
  Node* tmp = root;

  for(int i = 0; i < word.size(); i++) {
    int idx = word[i] - 'a';
    if(!tmp->children[idx]) return 0;

    tmp = tmp->children[idx];
  }
  return tmp->isEndOfWord;
}

int main() {
  int n;
  cin >> n;
  vector<string> wordsRead;
  
  // reading input
  for(int i = 0; i < n; i++) {
    string x; cin >> x;
    wordsRead.push_back(x);
  }

  //reading word to find
  string m; cin >> m;

  //filling trie
  Node* root = getNode();
  for(int i = 0; i < n; i++) {
    ReadWords(root, wordsRead[i]);
  }

  //finding words in trie
  cout << m << " "; 
  
  find(root, m) ? cout << "true" << endl : cout << "false" << endl;

  return 0;
}