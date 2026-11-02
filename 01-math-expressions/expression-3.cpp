#include <iostream>
#include <cmath>
using namespace std;


int main()
{
 double x, y;

 cout << "enter the value x";
 cin >> x;

 y = sqrt(x) * (pow(x, 3) + pow(x, 2));
 cout << "enter the result is " << y << endl;

 return 0;
}
