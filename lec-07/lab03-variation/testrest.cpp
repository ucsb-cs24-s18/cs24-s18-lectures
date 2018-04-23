// testlist.cpp
// Tests intlist.cpp

#include "intlist.h"

#include <cstdlib> // provides atoi
#include <iostream>
#include <cassert>

using namespace std;

void test_copyconstructor(){
    IntList list1;
    int arr[] ={10, 50, 60, 70, 100};
    for(int i = 0; i<5; i++){
        list1.append(arr[i]);
    }

    IntList list2(list1);
    assert(list1.count()== 5);
    assert(list2.count()==list1.count());
    for(int i = 0; i<5; i++){
        list1.append(2*arr[i]);
    }
    assert(list1.count()== 10);
    assert(list2.count()== 5);

}


void test_destructor(){
    IntList *list1 = new IntList;
    int arr[] ={10, 50, 60, 70, 100};
    for(int i = 0; i<5; i++){
        list1->append(arr[i]);
    }

    delete list1;
}

void test_assignmentOperator(){
    IntList list1, list2;
    int arr[] ={10, 50, 60, 70, 100};
    for(int i = 0; i<5; i++){
        list1.append(arr[i]);
    }
    for(int i = 0; i<5; i++){
        list2.append(2*arr[i]);
    }
    list2 = list1;

    assert(list2.sum()==list1.sum());

    list1.append(100);
    assert((list2.sum()+100) == list1.sum());

    list1 = IntList();
    assert(list1.sum() == 0);
    assert(list1.count() == 0);


}

// creates two lists (one empty), and does simple tests of list methods
int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "error: need at least one int arg on command line" << endl;
        cout << "usage: " << argv[0] << " testid " << endl;
        return 1;
    }
    if(atoi(argv[1])==1){
        test_copyconstructor();
        cout<<"PASSED copy constructor tests"<<endl;
    }
    if(atoi(argv[1])==2){
        test_destructor();
        cout<<"Testing destructor, run in valgrind to check for leaks"<<endl;
    }
    if(atoi(argv[1])==3){
        test_assignmentOperator();
        cout<<"PASSED assignment operator tests"<<endl;
    }

    return 0;
}
