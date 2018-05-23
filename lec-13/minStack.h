//minStack.h

#include <stack>

using namespace std;

class minStack{
	
public:
	void pop();
	void push(int value);
	int min();

private:
	stack<int> st;
	stack<int> currMin;

};


void minStack::pop(){
	if(!st.empty()){
		if(st.top()== min()){
			currMin.pop();
		}
		st.pop();
	}


}
void minStack::push(int value){

	if(st.empty() || value <= min() ){
		// First element
		currMin.push(value);
	}
	st.push(value);
}

int minStack::min(){

	if(!currMin.empty()){
		return currMin.top();
	} 
	
	return 0x7FFFFFFF;
	

}
