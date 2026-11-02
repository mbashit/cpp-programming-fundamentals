/*Write the C++ program that corresponds to the following flowchart and
then create a trace table to determine the values of the variables in each
step for two different executions.
The input values for the two executions are (i) 10, and (ii) 2*/

#include <iostream>
using namespace std;

int main()
{
    int x, w, y,z;

    cout << "enter x";
    cin >> x;

    w = (x * 3) - 15;
    z = (w + 7) * (x + 4) - 7;

    if (w > x && z > x) {
         x = x + 1;
         y = (x / 2) + 4;
    }
    else {
        y = (x / 4) + 2;
    }
    cout << y << endl;

    return 0;
}
