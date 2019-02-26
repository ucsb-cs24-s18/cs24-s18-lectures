// BST.cpp
// Implements class BST
// YOUR NAME(S), DATE

#include "bst.h"
#include <iostream>

// constructor sets up empty tree

template <class item>
BST<item>::BST() : root(0) { }

// destructor deletes all nodes

template <class item>
BST<item>::~BST() {
    clear(root);
}

// recursive helper for destructor

template <class item>
void BST<item>::clear(Node *n) {
    if (n) {
	clear(n->left);
	clear(n->right);
	delete n;
    }
}

// insert value in tree; return false if duplicate

template <class item>
bool BST<item>::insert(item value) {
    Node* tmp = root;
    if(!root){
        root = new Node(value);
        return true;
    }
    while(tmp){
        if(tmp->info == value)
            return false;
        if(tmp->info < value){
            if(tmp->right == 0){
                tmp->right= new Node(value);
                tmp->right->parent = tmp;
                return true;

            } else{
                tmp = tmp->right;
            }
        } else{
            if(tmp->left == 0){
                tmp->left= new Node(value);
                tmp->left->parent = tmp;
                return true;

            } else{
                tmp = tmp->left;
            }

        }
    }
    return false;
}

template <class item>
void BST<item>::printInOrder() const{
    
    printInOrder(root);
    std::cout<<std::endl;

} 

template <class item>
void BST<item>::printInOrder(Node *n) const{
    if(n){
        printInOrder(n->left);
        std::cout<<n->info<<" ";
        printInOrder(n->right);

    }
      
}  


