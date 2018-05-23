// Implement a class MyQueue using two stacks
/* Questions

What methods should we implement?
- pop(), push() , front()...back() is optional
What are we storing in  MyQueue
- integers
*/
#include <iostream>
#include <stack>
#include <cassert>
using namespace std;

class MyQueue{

public:
	void pop();// remove from the front of the queue
	void push(int value); // insert to the rear of the queue
	int front();
	bool empty();

private:
	stack<int> rearStack;
	stack<int> frontStack;

};

void MyQueue::pop()// remove from the front of the queue
{

	assert(!empty());
	if(frontStack.empty()){
		while(!rearStack.empty()){
			frontStack.push(rearStack.top());
			rearStack.pop();
		}
	}
	frontStack.pop();

}
void MyQueue::push(int value) // insert to the rear of the queue
{
	rearStack.push(value);

}
int MyQueue::front(){
	
	assert(!empty());
	if(frontStack.empty()){
		while(!rearStack.empty()){
			frontStack.push(rearStack.top());
			rearStack.pop();
		}
	}
	return frontStack.top();

}
bool MyQueue::empty(){
	return frontStack.empty() && rearStack.empty();
}

int main(){
	MyQueue q;
	q.push(50);
	q.push(60);
	q.push(40);
	cout<<"Pushed 50, 60, 40"<<endl;
	cout<<"F: expected 50 "<<" Actual: "<< q.front()<<endl;
	q.pop();
	cout<<"Popped 50"<<endl;
	cout<<"F: expected 60 "<<" Actual: "<< q.front()<<endl;

}


