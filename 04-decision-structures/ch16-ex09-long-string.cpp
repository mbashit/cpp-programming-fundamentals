/*Write a C++ program that prompts the user to enter a string, and then
displays the message “Many characters” when the given string contains
more than 20 characters*/

#include <iostream>
using namespace std;

int main()
{
	string name;

	cout << "enter the name" << endl;
	cin >> name;

	if (name.length() > 20) {
		cout << "Many characters" << endl;
	}
}
