/*Design a flowchart and write the corresponding C++ program that lets
the user enter an integer between −9999 and 9999, and then counts its
total number of digits. In the end, a message “You entered a N-digit
number” is displayed, where N is the total number of digits. Assume
that the user enters a valid integer between −9999 and 9999.*/

#include <iostream>
using namespace std;

int main()
{
	int x;

	cout << "enter an integer from (-9999 to 9999): ";
	cin >> x;

	if (x >= -9 && x <= 9) {
		cout << "A 1 -digit integere entered: ";
	}

	else if (x >= -99 && x <= 99) {
	cout << "A 2 - digit integer entered: ";
	}

	else if (x >= -999 && x <= 999) {
	cout << "A 3 - digit integer entered: ";
	}

	else if (x >= -9999 && x <= 9999) {
		cout << "A 4 - digit integer entered: ";
	}

	else {
		cout << "wrong integer entered: " << endl;
	}
	return 0;
}
