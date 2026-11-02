/*Write a C++ program that lets the user enter a digit, such as 0, 1, or 2,
and then converts it into the corresponding word, such as "zero", “one”
or "two". This must be done for the numbers 0 to 9. Display "I don't
know this number!" when the user enters an unknown.*/

#include <iostream>
using namespace std;

int main()
{
	int digit;

	cout << "enter a digit ";
	cin >> digit;

	switch (digit) {
	case 0:
		cout << "zero" << endl;
		break;
	case 1:
		cout << "one" << endl;
		break;
	case 2:
		cout << "two" << endl;
		break;
	case 3:
		cout << "three" << endl;
		break;
	case 4:
		cout << "four" << endl;
		break;
	case 5:
		cout << "five" << endl;
		break;
	case 6:
		cout << "six" << endl;
		break;
	case 7:
		cout << "seven" << endl;
		break;
	case 8:
		cout << "eight" << endl;
		break;
	case 9:
		cout << "nine" << endl;
		break;
	default:
		cout << "I don't know this number!";
	}
	return 0;
}
