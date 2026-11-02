#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
 double w, y;
	
 cout << "enter the value of w";
 cin >> w;

 y = pow(sin(M_PI / 3.0) - cos(M_PI / 2.0) * (w), 2);

 cout << "enter the result is" << y << endl;
 return 0;

}
