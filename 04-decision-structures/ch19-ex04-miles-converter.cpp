/*Write a C++ program that displays the following menu:
Convert Miles to Yards
Convert Miles to Feet
Convert Miles to Inches
It then prompts the user to enter a choice (of 1, 2, or 3) and a distance in
miles. Then, it calculates and displays the required value. Assume that
the user enters a valid value for the distance. However, if the choice
entered is invalid, an error message must be displayed. It is given that
1 mile = 1760 yards
1 mile = 5280 feet
1 mile = 63360 inches*/

#include <iostream>
using namespace std;

int main()
{
	int choice,miles, yards, feet, inches;

	cout << "enter the user choice:";
	cin >> choice;
	cout << "enter the amount: ";
	cin >> miles;

	switch (choice) {
	case 1:
		yards = (miles * 1760); 
		cout << "miles to yards:" << yards << "yards" << endl;
		break; 
	case 2:
		feet = (miles * 5280);
		cout << "miles to feet:" << feet << "feet" << endl;
		break; 
	case 3:
		inches = (miles * 63360);
			cout << "miles to inches:" << inches << "inches" << endl;
		break;
		
	default:
		cout << "invalid input " << endl;
	}
	return 0;
}
