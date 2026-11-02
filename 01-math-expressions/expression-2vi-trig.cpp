#define _USE_MATH_DEFINES

 #include <iostream>

#include <math.h>

using namespace std;

int main()
{
 double w, x, y;
 cout << "enter the value of x";
 cin >> x;
 cout << "enter the value of w";
 cin >> w;

 y = pow(sin(M_PI / 2.0) * (x)+cos((3 * M_PI) / (2.0)) * (w), 3) / pow(tan((2 * M_PI) / 3.0 * (w)) - sin(M_PI / 2.0 * (x)), 1 / 2)+6;
 cout << "the result is" << y << endl;
 
 return 0;

}
