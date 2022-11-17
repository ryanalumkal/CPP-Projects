#include <iostream>
#include <random>
using namespace std;


int points(int value){
	int number = 1+ (rand()%10);
	int score =0;
	cout<< number;
	if (value == number){
		score +=1;
		}
	return score;	
}

int main(){
	int value;
	cout<<"Welcome to the Casino";
	cout <<"\nEnter a number between 1-10: ";
	cin>>value;
	int score = points(value);
	cout<< "\nYour score is "<< score;
	return 0;
	
}