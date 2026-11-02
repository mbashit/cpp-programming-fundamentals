//// manipulating strings 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Write a C++ program that prompts the user to enter a three-digit integer
and then reverses it. For example, if the user enters the number 375, the
number 573 must be displayed. Solve this exercise without using the
integer remainder ( % ) operator.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number, reversed_number;
	string s_number, digit1, digit2, digit3, k;


	cout << "enter three digit number";
	cin >> number;

	digit1 = s_number[0];
	digit2 = s_number[1];
	digit3 = s_number[2];

	reversed_number = stoi(digit3 + digit2 + digit1);
	cout << reversed_number << endl;

	cout << reversed_number << endl;
	return 0;

}
