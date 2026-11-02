/*Write a C++ program that prompts the user to enter four numbers and,
if one of them is negative, it displays the message “Among the given
numbers, there is a negative one!”*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;

	cout << "enter the numbers " << endl;
	cin >> a >> b >> c >> d;

	if (a < 0 || b < 0 || c < 0 || d < 0) {
		cout << "Among the given numbers, there is a negative one!" << endl;
	}
}
