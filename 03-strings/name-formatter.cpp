/*Write a C++ program that prompts the user to enter his or her first
name, middle name, last name, and his or her preferred title (Mr., Mrs.,
Ms., Dr., and so on) and displays them formatted in all the following
ways.
Title FirstName MiddleName LastName
FirstName MiddleName LastName
LastName, FirstName
LastName, FirstName MiddleName
LastName, FirstName MiddleName, Title
FirstName LastName
*/

#include <iostream>
using namespace std;

int main()
{
	string firstname,  middlename, lastname, title;
	int space_pos;

	cout << "enter firstname";
	cin >> firstname;

	cout << "enter middle name";
	cin >> middlename;

	cout << "enter last name";
	cin >> lastname;

	cout << "enter title";
	cin >> title;

	cout << title << " " << firstname << " " << middlename << " " << lastname <<endl;
	cout << firstname << " " << middlename << " " << lastname << endl;
	cout << lastname << " , " << firstname << endl;
	cout << lastname << " , " << firstname << "  " << middlename << endl;
	cout << lastname << " , " << firstname << "  " << middlename << " , " << title << endl;
	cout << firstname << " " << lastname << endl;

	return 0;



}
