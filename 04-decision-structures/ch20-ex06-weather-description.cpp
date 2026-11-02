/*Write a C++ program that prompts the user to enter two values, one for
temperature and one for wind speed. If the temperature is above 75
degrees Fahrenheit, the day is considered hot, otherwise it is cold. If the
wind speed is above 12 miles per hour, the day is considered windy,
otherwise it is not windy. The program must display one single
message, depending on values given. For example, if a user enters 60
for temperature and 10 for wind speed, the program must display “The
day is cold and not windy”. Assume that the user enters valid values.*/


#include <iostream>
using namespace std;

int main()
{
	int x, y;

	cout << "enter the temperature in fahrenheit:" << endl;
	cin >> x;
	cout << "enter the wind speed in miles per hour:" << endl;
	cin >> y;

	if (x > 75 && y > 12) {
		cout << "The day is hot and windy" << endl;
	}
	else if (x > 75 && y < 12) {
		cout << "The day is hot and not windy" << endl;
	}
	else if (x < 75 && y > 12) {
		cout << "The day is cold and windy" << endl;
	}
	else {
		cout << "The day is cold and not windy"<<endl;
	}
	return 0;
}
