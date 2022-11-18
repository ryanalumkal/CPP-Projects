
#include <iostream>
#include <random>
#include <ctime>
using namespace std;

// Make it a slots game, 3 random ascii images are shown, if 3 of the same, grant points and ask user if they want to continue

string symbols(){
	string symbols[3] = {"6","7","8"};
	string result = "";
	for (int i =0; i <3; i++)
		result = result + symbols[rand()%3];
	return result;
}

int point(string result, int value){
	string number = result[0];
	int point;
	if (number == result[1] && number == result[2])
		point = 1.5* value;
	return point;
	
}

int main(){
	srand(time(NULL));
	int value;
	cout<<"\nWelcome to the Casino \n \nEnter your bet and play slots!";
	cout <<"\nEnter your bet: "; 
	cin>>value;
	string result = symbols();
	point(result, value);
	cout<< "\nResults: " <<result;
	return 0;
	
}