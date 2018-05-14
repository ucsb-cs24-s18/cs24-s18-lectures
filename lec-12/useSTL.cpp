// useSTL.cpp

#include <iostream>
#include <array>
#include <vector>
#include <set>

using std::cout;
using std::endl;
int main() {

    std::array<int, 10> arr;

    for(int i =0; i<10;i++)
        arr[i] = 10*i;

    for(auto item:arr )
        cout<<item<<" ";


    std::vector<std::string> v;
    v.push_back("India");
    v.push_back("Burma");
    v.push_back("UK");
    v.push_back("Norway");
    v.push_back("US");
    v.push_back("North Korea");
    cout<<"Using a vector: dynamic array"<<endl;
    for(auto item:v )
        cout<<item<<" ";

    cout<<endl;


    std::set<std::string> bst;
    bst.insert("India");
    bst.insert("Burma");
    bst.insert("UK");
    bst.insert("Norway");
    bst.insert("US");
    bst.insert("North Korea");
    cout<<"Using a set: balanced BST"<<endl;
    for(auto item:bst )
        cout<<item<<" ";

    cout<<endl;


    // insert data to bst1
    /*bst1.insert(64);
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


    BST<std::string> bst2;

    // insert data to bst1

    cout<<"In order traversal: \n";
    bst2.printInOrder();*/

}