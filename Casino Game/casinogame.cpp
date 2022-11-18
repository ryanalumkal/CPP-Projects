
#include <iostream>
#include <random>
#include <ctime>
using namespace std;

// Make it a slots game, 3 random ascii images are shown, if 3 of the same, grant points and ask user if they want to continue

int point(string result, int bet)
{
	char number = result[0];
	int point;
	if (number == result[1] && number == result[2])
		point = ((1.5)* bet);
	return point;
}

string symbols()
{
	char symbols[3] = {'6','7','8'};
	string result = "";
	for (int i =0; i <3; i++)
		result = result + symbols[rand()%3];
	return result;
}

int main()
{
	int bet, cash_out = 0;
	char user_continue;
	cout<<"\nWelcome to the Casino \n \nEnter your bet and play slots!";
	while (true)
	{
		srand(time(NULL));
		cout <<"\nEnter your bet: "; 
		cin>>bet;
		string result = symbols();
		cout << "\n" <<result;
		cash_out += point(result, bet);
		cout<< "\nYour winnings: " << cash_out;
		cout<<"\nDo you want to continue? (Enter Y or N): ";
		cin>> user_continue;
		if (user_continue == 'N' || user_continue == 'n')
			break;
	}
	return 0;
	
}	