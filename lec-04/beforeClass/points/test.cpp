//test.cpp

#include <iostream>
#include "point.h"

using namespace std;

int main(){
	point p1(10, 20), p2(10, 40);
	cin>>p1;
	cout<<"Calling the overloaded << operator"<<endl;
	cout<<"Point 1: ";
	cout<<p1;  //operator<<(cout, p1);
	cout<<"Point 2: ";
	cout<<p2;
	


	//cout<<"Point 1: "<<"( "<<p1.get_x()<<", "<<p1.get_y()<<")"<<endl;
	//cout<<"Point 2: "<<"( "<<p2.get_x()<<", "<<p2.get_y()<<")"<<endl;
	
	//p2.shift(0,-20);

	if(p1 == p2){
		cout<<"The two points are equal\n";
	}else{
		cout<<"The two points are not equal\n";
	}

	point p3;
	p3 = p1 + p2; //p3 = operator+(p1,p2);
	cout<<"Point 3: "<<p1<<p2<<p3;


	string s1 = "Hello";
	string s2 = " There";
	string s3;
	s3 = s1 + s2;
	cout<<s3<<endl;

	return 0;
}