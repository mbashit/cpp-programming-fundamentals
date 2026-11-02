#include <iostream>
#include <cmath>
#include<math.h>

using  namespace std;

int main()
{
	double x,n, y;
	cout << "enter the value x";
	cin >> x;
	y = sqrt(pow(x, 4) - 2 * pow(x, 3) - 7 * pow(x, 2) + x) / pow(4 * (7 * pow(x, 4) - (3.0 / 4) * pow(x, 3) * (7 * pow(x, 2) + x)), 1 / 3);
	
	
	cout << "the result is" << y << endl;

	return 0;

}
