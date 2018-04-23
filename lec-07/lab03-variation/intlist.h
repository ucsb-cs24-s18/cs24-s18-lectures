// intlist.h
// Linked list header file 

#ifndef INTLIST_H
#define INTLIST_H

class IntList {

public:

<<<<<<< HEAD:lec-07/lab03-variation/intlist.h
    IntList();              // constructor
=======
>>>>>>> 3eb9b612b680bcb65af56e71b1547927a329417d:lec-07/lab03/intlist.h
    void append(int value); // append value at end of list
    void print() const;     // print values separate by ' '
    int count() const;      // return count of values

<<<<<<< HEAD:lec-07/lab03-variation/intlist.h
=======
    // destructor, copy constructor and 6 other METHODS YOU MUST 
    // IMPLEMENT IN intlist.cpp (NO CHANGE HERE):
 
>>>>>>> 3eb9b612b680bcb65af56e71b1547927a329417d:lec-07/lab03/intlist.h
    int sum() const;                 // sum of all values
    bool contains(int value) const;  // true if value in list
    int max() const;                 // maximum value
    double average() const;          // average of all values
    void insertFirst(int value);     // insert new first value

<<<<<<< HEAD:lec-07/lab03-variation/intlist.h

=======
>>>>>>> 3eb9b612b680bcb65af56e71b1547927a329417d:lec-07/lab03/intlist.h
private:

    // (Optional) You can add some private helper functions here.

    // definition of Node structure (DO NOT CHANGE):
    struct Node {
        int info;
        Node *next;
    };

<<<<<<< HEAD:lec-07/lab03-variation/intlist.h
    Node * head; // pointer to first node (DO NOT CHANGE):
    Node * tail; // pointer to last node (DO NOT CHANGE):
=======
    Node* head; 
    Node* tail;
>>>>>>> 3eb9b612b680bcb65af56e71b1547927a329417d:lec-07/lab03/intlist.h
};

#endif
