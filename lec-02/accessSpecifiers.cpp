// lecure-01.cpp
#include <iostream>
using namespace std;

class Employee{
public:
	// public access specifier makes everything
	// under this block visible to code outside 
	// the scope of this class e.g. in main
	// methods of the class defined below:
	void increment(double amount);  //Here is a commment
	void printInfo();
	void setName(string uname);
	void setSalary(double amount);
    // data fields (member variables defined below)
	string getName() const;  //accessor
private:
	string name;
	double salary;
};

void Employee::setName(string uname){
 	name = uname;
}

string Employee::getName(){
	return name;
}

void Employee::setSalary(double amount){
	salary = amount;
}

void Employee::increment(double amount){
	salary = salary+ amount;
}

// We will implement the methods of the class
// in the next lecture

int main(){
	Employee secretary, president;
	//Declaring two objects of type Employee
	secretary.setName ("Rabbit");
	president.setName( "Turtle");
	cout<< " Name of secretary: "<< secretary.getName()<<endl;
	cout<< " Name of president: "<< president.getName()<<endl;

	return 0;
}
