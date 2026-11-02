#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;

    cout << "enter the value x";
    cin >> x;

    y = (7 * x) /( 2 * x + 4 * (pow(x, 3) + 4));

    cout << " the result is " << y << endl;
    return 0;


}
