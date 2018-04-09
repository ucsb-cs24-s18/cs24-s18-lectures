// toss.cpp
// Diba Mirza
// A procedural implementation of 
// determining who makes the first move 
// in a game of backgammon

#include <iostream>
#include <time.h>
using namespace std;

struct Player{
	string name;
	int dieOne;
	int dieTwo;
	int score;
};

void roll( Player &p){
	p.dieOne = rand()%6 + 1;
	p.dieTwo = rand()%6 + 1;
	if ( p.dieOne == p.dieTwo){
		p.score= 4*p.dieOne;
	}else{
		p.score= p.dieOne + p.dieTwo;
	}
}

void displayDie(Player &p){
	cout<<p.name<<"'s die values are: ";
	cout<<"("<< p.dieOne<<", "<<p.dieTwo<<")\n";
}

int main(){
	
	Player p1, p2;
	p1.name = "Jack";
	p2.name = "Jill";
	string winner;
	char play;
	srand(time(0));

	do{
		roll(p1);
		roll(p2);
		displayDie(p1);
		displayDie(p2);

		if(p1.score == p2.score){
			cout<<"It's a Tie!"<<endl;
		}else{
			winner = p1.score> p2.score? p1.name:p2.name;
			cout<<winner<<" wins!!!"<<endl;
		}
		cout<<"Play again? (y/n) : ";
		cin>>play;

	}while(play == 'y');

	return 0;
}