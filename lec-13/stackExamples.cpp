//stackExamples.cpp
//reverse a string using the stack data structure

#include <iostream>
#include <stack>

using namespace std;

string reverse(string input){
	string result ="";
	stack<char> st;
	for(auto item: input){
		st.push(item);
	}
	while(!st.empty()){
		result+= st.top();
		st.pop();
	}

	return result;

}



int main(int argc, char* argv [])
{
	string result;

	result = reverse(argv[1]);
	cout<<" Reversed string is "<<result<<endl;

	
}