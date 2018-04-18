//test.cpp

#include <iostream>
#include "point.h"

using namespace std;

int main(){
	point p1(100, 200), p2(100, 400);

	cin>>p1; // operator>>(cin, p1);

	cout<<"Point 1: ";
	cout<<p1; //operator<<(cout, p1);

	//cout<<"Point 1: "<<"("<<p1.get_x()
	//	<<", "<<p1.get_y()<<")"<<endl;
	
	cout<<"Point 2: "<<"("<<p2.get_x()
		<<", "<<p2.get_y()<<")"<<endl;
	
	p2.shift(0, -200);

	if(p1 == p2){// operator==(p1, p2);
		         // p1.operator==(p2);
		cout<<"The points are equal \n";
	}

	point p3;
	p3 = p1 + p2; // p3 = operator+(p1, p2);

	cout<<"Point 3: "<<"("<<p3.get_x()
		<<", "<<p3.get_y()<<")"<<endl;
	
	/*
	string s1 = "Hello";
	string s2 = " There";
	string s3;
	s3 = s1 + s2;
	cout<<s3<<endl;*/
	return 0;
}