#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double x, w, y;

	cout << "enter the value of x";
	cin >> x;
	cout << "enter the value of w ";
	cin >> w;

	y = pow(x + 3,5 * w) /( 7 * (x - 4));
	cout << "the result is" << y << endl;

	return 0;
}
