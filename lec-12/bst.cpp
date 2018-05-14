// BST.cpp
// Implements class BST
// YOUR NAME(S), DATE

#include "bst.h"
#include <iostream>

// constructor sets up empty tree

BST::BST() : root(0) { }

// destructor deletes all nodes

BST::~BST() {
    clear(root);
}

// recursive helper for destructor

void BST::clear(Node *n) {
    if (n) {
	clear(n->left);
	clear(n->right);
	delete n;
    }
}

// insert value in tree; return false if duplicate

bool BST::insert(int value) {
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


void BST::printInOrder() const{
    
    printInOrder(root);
    std::cout<<std::endl;

} 


void BST::printInOrder(Node *n) const{
    if(n){
        printInOrder(n->left);
        std::cout<<n->info<<" ";
        printInOrder(n->right);

    }
      
}  


