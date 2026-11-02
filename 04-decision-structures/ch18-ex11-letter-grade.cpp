/*11.

The most popular and commonly used grading system in the United
States uses discrete evaluation in the form of letter grades. Design a
flowchart and write the corresponding C++ program that prompts the
user to enter a letter between A and F, and then displays the
corresponding percentage according to the following table.
Grade Percentage
A 90 ‑ 100
B 80 ‑ 89
C 70 ‑ 79
D 60 ‑ 69
E / F 0 ‑ 59
Assume that the user enters a valid value.*/

#include <iostream>
using namespace std;

int main()
{
	double A, B, C, D, E, F;

	cout << "enter a letter (A-F): ";
	cin >> A >> B >> C >> D >> E >> F;

	if (A >=90 && A <=100) {
		cout << "Grade is (90 - 100)";
	}
	else if (B >=80 && B <= 89) {
		cout << "Grade is (80-89)";
	}
	else if (C >=70 && C <= 79) {
		cout << " Grade is (70 -79)";
	}
	else if (D >= 60 && D <= 69) {
		cout << "Grade is (60 -69)";
	}
	else if (E >=0 && E <=59 || F >= 0 && E <= 59) {
		cout << "Grade is (0 -59)";
	}
	else {
		cout << "invalid input" << endl;
	}
	return 0;
}
