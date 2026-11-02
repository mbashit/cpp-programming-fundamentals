/*Write a C++ program that lets the user enter an integer, and then
displays a message indicating whether the given number is a multiple of
6; it must display “NN is not a multiple of 6” otherwise (where NN is
the given number). Assume that the user enters a non-negative
[14] value.*/

#include <iostream>
using namespace std;

int main()
{
	int NN;

	cout << "enter the integer: ";
	cin >> NN;
    NN == NN;

	if (NN % 6 != 0) {
		cout <<  "integer is not a multiple of 6 " << endl;

	}
	else {
		cout << "integer is the given number " << endl;
	}
	return 0;
}
