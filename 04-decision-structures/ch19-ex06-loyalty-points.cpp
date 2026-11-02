/*An online CD shop awards points to its customers based on the total
number of audio CDs purchased each month. The points are awarded as
follows:
If the customer purchases 1 CD, he or she is awarded 3 points.
If the customer purchases 2 CDs, he or she is awarded 10 points.
If the customer purchases 3 CDs, he or she is awarded 20 points.
If the customer purchases 4 CDs or more, he or she is awarded 45
points.
Write a C++ program that prompts the user to enter the total number of
CDs that he or she has purchased in a month, and then displays the
number of points awarded. Assume that the user enters a valid value.*/

#include <iostream>
using namespace std;

int main()
{
	int x;

	cout << "enter the number of CDs:";
	cin >> x;

	switch (x) {
	case 1:
		cout << "awarded 3 points" << endl;
		break;
	case 2:
		cout << "awarded 10 points" << endl;
		break;
	case 3:
		cout << "awarded 20 points" << endl;
		break;
	case 4:
		cout << "awarded 45 points" << endl;
		break;
	default:
		cout << "invalid inputs" <<endl;
	}
	return 0;
}
