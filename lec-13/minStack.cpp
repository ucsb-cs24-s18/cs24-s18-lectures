//minStack.cpp

#include <iostream>
#include "minStack.h"
using namespace std;


int main(){

	minStack stmin;
	stmin.push(6);
	cout<<"push(6)"<<endl;
	cout<<" Expected min : " << 6 <<" Got: "<< stmin.min()<<endl;
	stmin.push(10);
	cout<<"push(10)"<<endl;
	cout<<" Expected min : " << 6 <<" Got: "<< stmin.min()<<endl;
	stmin.push(4);
	cout<<"push(4)"<<endl;
	cout<<" Expected min : " << 4 <<" Got: "<< stmin.min()<<endl;
	stmin.push(7);
	cout<<"push(7)"<<endl;
	cout<<" Expected min : " << 4 <<" Got: "<< stmin.min()<<endl;
	stmin.pop();
	cout<<"popped 7"<<endl;
	cout<<" Expected min : " << 4 <<" Got: "<< stmin.min()<<endl;
	stmin.pop();
	cout<<"popped 4"<<endl;
	cout<<" Expected min : " << 6 <<" Got: "<< stmin.min()<<endl;

}
