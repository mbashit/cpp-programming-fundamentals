/*Two football teams play against each other in the UEFA Champions
League. Write a C++ program that prompts the user to enter the names
of the two teams and the goals each team scored and then displays the name of the winner or the message “It's a tie!” when both teams score
equal number of goals. Assume that the user enters valid values.*/

#include <iostream>
using namespace std;


int main()
{
	string teamA, teamB, goalA, goalB;

	cout << "enter the name of the first team: ";
	cin >> teamA;
	cout << "enter the name of the second team: ";
	cin >> teamB;
	cout << "enter goals scored by first team: ";
	cin >> goalA;
	cout << "enter the goals scored by second team: ";
	cin >> goalB;

	if (goalA > goalB) {
		cout << "the winner is : " << teamA;
	}
	else if (goalB > goalB) {
		cout << "the winner is : " << teamB;
	}
	else {
		goalA == goalB;
		cout << "it's a tie : " << endl;

	}

	return 0;

	}
