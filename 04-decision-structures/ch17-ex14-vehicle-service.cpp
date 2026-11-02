/*Regular servicing will keep your vehicle more reliable, reducing the
chance of breakdowns, inconvenience and unnecessary expenses. In
general, there are two types of service you need to perform:
a minor service every 6000 miles
a major service every 12000 miles
Write a C++ program that prompts the user to enter the miles traveled,
and then calculates and displays how many miles are left until the next
service, as well as the type of the next service. Assume that the user
enters a valid value.
*/


#include <iostream>
using namespace std;

int main()
{
	int miles_traveled,miles_left;

	cout << "enter the miles traveled: " << endl;
	cin >> miles_traveled;

	if (miles_traveled > 6000) {
		cout << "major service" << endl;;
		miles_left = 12000 - miles_traveled;
		cout << "miles left is : " << miles_left;
	}

	else {
		cout << "minor service" << endl;
		miles_left = 6000 - miles_traveled;
			cout << "miles left to  next service : " << miles_left << endl;
		}
	return 0;
}
