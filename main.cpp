#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;


int main()
{
	int opponentSelection;
	string userSelection;

	cout << "Welcome to a game of Rock, Paper, Scissors! \n";
	cout << "Choose Rock, Paper Scissors to play: ";
	cin >> userSelection;
	userSelection = tolower(userSelection[0]); //takes the first character as a lower case
	
	srand(static_cast<unsigned>(time(nullptr))); //pulls random seed
	opponentSelection = rand() % 3 + 1; //random integer between 1, 2 and 3

	switch (opponentSelection)
	{
	case 1:
		cout << "Opponent selected rock.\n"; 
		if (userSelection == "r")
		{
			cout << "You have drawn!\n";
		}
		else if (userSelection == "p")
		{
			cout << "You have won!\n";
		}
		else if (userSelection == "s")
		{
			cout << "You have lost\n";
		}

		else
		{
			"You failed to select a valid choice!";
		}
		break;
	case 2:
		cout << "Opponent selected paper.\n";
		if (userSelection == "r")
		{
			cout << "You have lost!\n";
		}
		else if (userSelection == "p")
		{
			cout << "You have drawn!\n";
		}
		else if (userSelection == "s")
		{
			cout << "You have won\n";
		}
		else
		{
			"You failed to select a valid choice!";
		}
		break;
	case 3:
		cout << "Opponent selected scissors.\n";
		if (userSelection == "r")
		{
			cout << "You have win!\n";
		}
		else if (userSelection == "p")
		{
			cout << "You have lost!\n";
		}
		else if (userSelection == "s")
		{
			cout << "You have drawn\n";
		}
		else
		{
			"You failed to select a valid choice!";
		}
		break;
	default:
		cout << "System error with opponent response!";
		break;
	}


	return 0;
}