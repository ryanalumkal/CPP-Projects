#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int point(string result, int bet)
{
	char number = result[0];
	int point = 0;
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
	int bet_total =0;
	cout<<"\nWelcome to the Casino \n \nEnter your bet and play slots!";
	while (true)
	{
		int cash_out = 0, bet =0;
		srand(time(NULL));
		cout <<"\nEnter your bet: "; 
		cin>>bet;
		string result = symbols();
		cout << "\n" <<result;
		cash_out = point(result, bet);
		if (cash_out == 0)
		{
			bet_total -= bet;
		}
		else
		{
			bet_total += cash_out;	
		}
			
		cout<< "\nYour total winnings: " << bet_total;
		cout<<"\nDo you want to continue? (Enter Y or N): ";
		try
		{
			char user_continue;
			cin>> user_continue;
			if (user_continue == 'N' || user_continue == 'n'|| user_continue == 'Y' || user_continue == 'y')
			{
				if (user_continue == 'N' || user_continue == 'n')
				{
					cout<<"Thank you for gambling!";
					break;
				}
			}else{
				throw "incorrect value";
			}
		}
		catch(...)
		{
			cout<<"The value is incorrect";
		}
	}
}	