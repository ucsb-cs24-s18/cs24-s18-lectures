#include <iostream>
#include <cassert>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void printList(Node* head){
    Node* tmp = head;
    while( tmp){
        cout<<tmp->data<< " ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void insert(Node*& head, Node*& tail, int value){
// Post condition: Inserts a new node to the beginning of a linked list
    Node* p = new Node;
    p->data = value;
    p->next = nullptr;
    
    if(head == nullptr){ // Empty linked list
        head = p;
        tail = p;
    }else{
        p->next = head;
        head = p;
    }

}

int main(){
    Node* head = nullptr;
    Node* tail = nullptr;
    insert(head, tail, 10);
    //cout<< " Value of the first node :" << head->data<<endl;
    printList(head);
    assert(head->next == nullptr);
    insert(head, tail, 20);
    /*cout<< " Value of the first node :" << head->data<<endl;
    cout<< " Value of the second node :" << head->next->data<<endl;*/
    printList(head);
    assert(tail->next == nullptr);
    


}
