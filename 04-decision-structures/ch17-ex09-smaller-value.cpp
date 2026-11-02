/*Design a flowchart and write the corresponding C++ program that lets
the user enter two values, and then determines and displays the smaller
of the two values. Assume that the user enters two different values */

#include <iostream>
using namespace std;

int main()
{
	int x, y;

	cout << "enter the two numbers" << endl;
	cin >> x >> y;

	if (x < y) {
		cout << "the smaller number is: "<< x << endl;
	}
	else {
		cout << "the bigger number is:" <<y<< endl;
	}
	return 0;
}
