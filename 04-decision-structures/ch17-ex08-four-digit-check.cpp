/*Write a C++ program that lets the user enter an integer, and then
displays a message indicating whether the given integer is a four-digit
integer; it must display “NN is not a four-digit integer” otherwise
(where NN is the given number). Assume that the user enters a nonnegative value.
*/

#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "enter integer: ";
    cin >> x;

    if (x < 999 || x > 9999) {
        cout << "integer is not a four-digit integer";
    }
    else {
        cout << "integer is a four-digit integer ";
    }
    return 0;
}
