/*Write a C++ program that prompts the user to enter a number, and then
displays the message “Positive” when the given number is positive*/

#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "enter the number";
	cin >> number;

	if (number > 0) {
		cout << "positive" << endl;
	}
}
