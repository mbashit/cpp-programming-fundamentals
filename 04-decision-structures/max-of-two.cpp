#include <iostream>

using namespace std;

int main()
{
	int  numb1, numb2;
	

	cout << "enter the two numbers: ";
	cin >> numb1 >> numb2 ;

	if (numb1 > numb2) {

		cout << "maximum number is " << numb1;
	}
	else if (numb2 > numb1) {
		cout << "maximum number is " << numb2;
	}
}
