/**/

#include <iostream>
using namespace std;

int main()
{
	int number;
	double A, B;

	cout << "1 addition" << endl;
	cout << "2 subtraction" << endl;
	cout << "3 multiplication" << endl;
	cout << "4 division" << endl;

	cout << "Enter an integer between 1 and 4: ";
	cin >> number;
	cout << "Enter the first number:";
	cin >> A;
	cout << "Enter the second number:";
	cin >> B;

	switch (number) {
	case 1:
		 cout << A + B;
		break;
	case 2:
		cout << A - B;
		break;
	case 3:
		cout << A * B;
		break;
	case 4:
		if (B != 0) {
			cout << A / B;
		}
		else {
			cout << "error division by zero"<<endl;
		}
			break;
		
	}
	


}
