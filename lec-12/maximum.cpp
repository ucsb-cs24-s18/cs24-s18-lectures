//maximum.cpp
#include <iostream>
using namespace std;

//typedef string item;

template <class item>
item maximum(item a, item b); // Declaration

template <class item>
item maximum(item a, item b){
	if(a > b)
		return a;
	else
		return b;
}

int main(){

	cout<<" Maximum of 10, 50 is "<<maximum(10,50)<<endl;
	cout<<" Maximum of apple banana is "<<maximum("apple","banana")<<endl;
	cout<<" Maximum of 10.1, 50.1 is "<<maximum(10.1,50.1)<<endl;

}