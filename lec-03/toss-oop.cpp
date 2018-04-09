//toss-oop.cpp
/*
Objects.      Attributes.    Behavior        
Dice.        value, sides.   roll, display
Player.      name, score,    set and get name
             position,       playToss
             pair of die     
*/
#include <iostream>
#include <time.h>
using namespace std;

class Dice{

};
class Player{
public:
	void setName(string input); //modifier
	string getName() const; // accessor
	int playToss(); // roll the die,
				// returns a score, display the die values and the score

private:
	string name;
	int score;
	Dice die[2];


};
void Player::setName(string input){
	name= input;
} //modifier

string Player::getName() const{
	return name;

} // accessor

int Player::playToss(){
	int dieOne = rand()%6 + 1;
	int dieTwo = rand()%6 + 1;
	
	if ( dieOne == dieTwo){
		score= 4*dieOne;
	}else{
		score= dieOne + dieTwo;
	}
	cout<<name<<"'s die values are: ";
	cout<<"("<< dieOne<<", "<<dieTwo<<") Score: "<<score<<endl;
	return score;
}


int main(){
	
	Player p1, p2;
	p1.setName("Jack");
	p2.setName("Jill");
	string winner;
	char play;
	srand(time(0));

	do{
		
		int score1 = p1.playToss();
		int score2 = p2.playToss();

		if(score1 == score2){
			cout<<"It's a Tie!"<<endl;
		}else{
			winner = score1> score2? p1.getName():p2.getName();
			cout<<winner<<" wins!!!"<<endl;
		}
		cout<<"Play again? (y/n) : ";
		cin>>play;

	}while(play == 'y');

	return 0;
}
