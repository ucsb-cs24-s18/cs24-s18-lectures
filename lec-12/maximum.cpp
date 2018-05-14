//maximum.cpp
#include <iostream>
using namespace std;

int maximum(int a, int b){
	if(a > b)
		return a;
	else
		return b;
}

int main(){
	cout<<" Maximum of 10, 50 is "<<maximum(10,50)<<endl;

}