//test.cpp

#include <iostream>
#include "point.h"
using namespace std;

int main(){
	point p1(10, 20), p2(10,40);
	
	if (p1 == p2) { // operator==(p1, p2)
		cout<<"Points are equal"<<endl;
	}else{
		cout<<"Points are NOT equal"<<endl;
	}

	return 0;
}