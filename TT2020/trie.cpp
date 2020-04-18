//
//  main.cpp
//  TrieProblem
//
//  Created by Valeria Conde on 16/04/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;

struct TrieNode
{
    map<char,TrieNode*> children;
    int prefixes;
    bool endofword;
    string originalWord;
    
    TrieNode()
    {
        prefixes = 0;
        endofword = false;
        originalWord = "";
    }
};

bool isvowel(char c) {
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

void insert(TrieNode *root, string& word)
{
    TrieNode *current = root;
    for(int i = 0; i < (int)word.size(); i++)
    {
        char ch = word[i];
        if(isvowel(ch)) continue;
        
        TrieNode *node=current->children[ch];
        if(!node)
        {
            node=new TrieNode();
            current->children[word[i]]=node;
        }
        current=node;
        current->prefixes++;
    }
    current->endofword = true;
    current->originalWord = word;
}

bool search(TrieNode *root, string& word)
{
    TrieNode *current = root;
    for(int i = 0; i < word.size(); i++)
    {
        if(current->endofword) {
            cout << current->originalWord << " ";
            current = root;
        }
        
        char ch = word[i];
        TrieNode *node = current->children[ch];
        if(!node)
            return false;
        current = node;
    }
    cout << current->originalWord << endl;
    return current->endofword;
}


int main(int argc, const char * argv[]) {
    TrieNode * root = new TrieNode();
    
    int n;
    string s;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        insert(root, s);
    }
    
    cin >> s;
    search(root, s);
    
    
    return 0;
}
