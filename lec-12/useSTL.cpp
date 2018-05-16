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


}