//
//  main.cpp
//  ll
//
//  Created by Valeria Conde on 03/09/20.
//  Copyright © 2020 Valeria Conde. All rights reserved.
//

#include <iostream>
using namespace std;

template <class T>
class Node {
private:
    T data;
    Node<T> *next;
public:
    Node(T data) {
        this->data = data;
        this->next = nullptr;
    }
    
    Node(T data, Node<T> *next) {
        this->data = data;
        this->next = next;
    }
    
    T getData() {
        return data;
    }
    
    Node<T>* getNext() {
        return next;
    }
    
    void setData(T data) {
        this->data = data;
    }
    
    void setNext(Node<T> *next) {
        this->data = data;
    }
    
};



template <class T>
class LinkedList {
private:
    Node<T> *head;
    int size;
public:
    LinkedList() {
        head = nullptr;
        size = 0;
    }
    
    // METODOS COOLS
    // O(1)
    void addFirst(T data) {
        head = new Node<T>(data, head);
        size++;
    }

    // O(n)
    void addLast(T data) {
        if(size == 0) addFirst(data);
        Node<T> *curr = head;
        while(curr->getNext() != nullptr) {
            curr = curr->getNext();
        }
        curr->setNext(new Node<T>(data));
        size++;
    }
    
    // O(1)
    int getSize() {
        return size;
    }
    
    // O(1)
    bool isEmpty() {
        return head == nullptr;
    }
    
};





int main() {
    
    return 0;
}
