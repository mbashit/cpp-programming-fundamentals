#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number, reversed_number;
	string s_number,digit1, digit2, digit3;

	
	cout << "enter three digit number";
	cin >> number;

	digit1 = s_number[0]; //Assign (and convert) character at position 0 to string
	digit2 = s_number[1]; //Assign (and convert) character at position 1 to string
	digit3 = s_number[2]; 

	
	cout << digit3 << digit2 << digit1 << endl;
	return 0;

}
