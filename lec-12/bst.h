// bst.h
// Binary search tree header file for CS 24 lab

#ifndef BST_H
#define BST_H

#include <iostream>
template <class item>
class BST {

 public:
    // ctor, dtor, insert and one print method already done in intbst.cpp:
    BST();                   // constructor
    ~BST();                  // destructor
    bool insert(item value);     // insert value; return false if duplicate
    void printInOrder() const;       // print tree data in-order to cout

 private:

    struct Node {
	item info;
	Node *left, *right, * parent;
	// useful constructor:
    Node(item v) : info(v), left(0), right(0), parent(0) { }
    };

    // just one instance variable (pointer to root node):
    Node* root;
    void clear(Node *n); // for destructor
    void printInOrder(Node *n) const;

};

#include "bst.cpp"
#endif
