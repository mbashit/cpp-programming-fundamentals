/*Two football teams play against each other in the UEFA Champions
League. Write a C++ program that prompts the user to enter the names
of the two teams and the goals that each team scored, and then displays
the name of the winner. Assume that the user enters valid values and
there is no tie (draw).*/

#include <iostream>
using namespace std;

int main()
{
	int goalA,goalB;
	string teamA,teamB;

	cout << "enter the names of the two teams";
	cin >> teamA >> teamB;
	 
	cout << "enter the goals scored by each of the teams";
	cin >> goalA >> goalB;	

	if (goalA > goalB) {
		cout << "the winner is" << goalA << endl;
	}
	else {
		cout << "the winner is" << goalB << endl;
	}
	return 0;
}
