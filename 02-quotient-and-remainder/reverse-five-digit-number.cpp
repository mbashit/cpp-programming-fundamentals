#include <iostream>

using namespace std;

int main()
{
	int digit1, digit2, digit3, digit4, digit5, number, r, reversed_number;

	cout << "enter a five-digit integer: ";
	cin >> number;

	digit5 = number % 10;
	r = int(number / 10);
	
	digit4 = r % 10;
	r = int(r / 10);
	
	digit3 = r % 10;
	r = int(r / 10);

	digit2 = r % 10;

   digit1 = int(r / 10);

   reversed_number = digit5 * 10000 + digit4 * 1000 + digit3 * 100 + digit2 * 10 + digit1;

   cout << reversed_number << endl;

   return 0;





  
}
