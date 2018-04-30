// intlist.h
// Linked list header file 

#ifndef INTLIST_H
#define INTLIST_H

class IntList {

public:

    IntList();              // constructor
    ~IntList();
    IntList(IntList& list);
    void append(int value); // append value at end of list
    void print() const;     // print values separate by ' '
    int count() const;      // return count of values
   
    void clear();

    int sum() const;                 // sum of all values
    bool contains(int value) const;  // true if value in list
    int max() const;                 // maximum value
    double average() const;          // average of all values
    void insertFirst(int value);     // insert new first value
    void operator=(const IntList& source);

private:


    // definition of Node structure (DO NOT CHANGE):
    class Node {
        public:
        int info;
        Node *next;
    };

    Node* head; 
    Node* tail;
    bool containsIterative(int value) const;
};

#endif
