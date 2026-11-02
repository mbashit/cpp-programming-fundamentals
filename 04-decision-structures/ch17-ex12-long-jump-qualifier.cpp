/*Athletes in the long jump at the Olympic Games in Athens in 2004
participated in three different qualifying jumps. An athlete, in order to
qualify, has to achieve an average jump distance of at least 8 meters.
Write a C++ program that prompts the user to enter the three performances, and then displays the message “Qualified” when the
average value is greater than or equal to 8 meters; it displays
“Disqualified” otherwise. Assume that the user enters valid values.*/

#include <iostream>
using namespace std;

int main()
{
	int jump1,jump2, jump3;
	double avg;

	cout << "enter the number of jumps";
	cin >> jump1 >> jump2 >> jump3;

	avg = (jump1 + jump2 + jump3) / 3.0;

	if (avg < 8) {
		cout << "Disqualified" << endl;
	}
	else {
		cout << "qualified" << endl;
	}
	return 0;
}
