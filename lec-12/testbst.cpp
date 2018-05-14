// testbst.cpp

#include <iostream>
#include "bst.h"

using std::cout;
using std::endl;
int main() {

    BST bst1;

    // insert data to bst1
    bst1.insert(64);
    bst1.insert(128);
    bst1.insert(8);
    bst1.insert(512);
    bst1.insert(256);
    bst1.insert(32);
    bst1.insert(16);
    bst1.insert(4);
    cout<<"Inserted\n64 128 8 512 256 32 16 4 "<<endl;
    cout<<"In order traversal: \n";
    bst1.printInOrder();

}
