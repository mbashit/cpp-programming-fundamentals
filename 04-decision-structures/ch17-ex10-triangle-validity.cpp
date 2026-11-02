/*Write a C++ program that lets the user enter three numbers, and then
displays a message indicating whether the given numbers can be
lengths of the three sides of a triangle; it must display “Given numbers
cannot be lengths of the three sides of a triangle” otherwise. Assume
that the user enters valid values*/

#include <iostream>
using namespace std;

int main()
{
	int x, y, z;

	cout << "enter the three numbers: " << endl;
	cin >> x >> y >> z;

	if ((x != y + z) || (y != x + z) || (z != x + y)) {
		cout << "given numbers cannot be sides of a triangle";
	}
	else {
		cout << "given numbers are length of a triangle";
	}
	return 0;
}
