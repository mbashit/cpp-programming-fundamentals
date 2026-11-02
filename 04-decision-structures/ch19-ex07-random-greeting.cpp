/*Write a C++ program that prompts the user to enter his or her name,
and then displays “Good morning NN” or “Good evening NN” or
“Good night NN”, where NN is the name of the user. The message to
be displayed must be chosen randomly*/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


int main()
{
	srand(time(NULL));
	string Name;
	int i;


	int random = 1 + rand() % 3;

	
	cout << "enter the user's name:" << endl;
	cin >> Name;

	switch (random) {
	case 1:
		cout << " Good morning " << Name << endl;
		break;
	case 2:
		cout << " Good evening " << Name << endl;
		break;
	case 3 :
		cout << " Good night " << Name << endl;
	}
	return 0;
}
