/*
Write a C++ program that prompts the user to enter an integer
representing an elapsed time in seconds and then displays it in the
format “WW week(s) DD day(s) HH hour(s) MM minute(s) and SS
second(s)”. For example, if the user enters the number 2000000, the
message “3 week(s) 2 day(s) 3 hour(s) 33 minute(s) and 20 second(s)”
must be displayed
*/

#include <iostream>

using namespace std;

int main()
{
	int weeks, days, hours, minutes,r,number, seconds;

	cout << "Enter the period in seconds :";
	cin >> number;
    
	weeks = (int)(number / 604800); // 60*60*24*7 = 604800
	r = number % 604800;

	days = (int)(r / 86400); // 60*60*24 = 86400
	r = r % 86400;

	hours = (int)(r / 3600); // 60*60 = 3600
	r = r % 3600;

	minutes = (int)(r / 60); // 1*60 = 60
	seconds = r % 60;

	cout << weeks << "week(s)" << days << "day(s)" << hours << "hour(s)" << endl;
	cout << minutes << "minute(s)" << seconds << "second(s)" << endl;

	return 0;




}
