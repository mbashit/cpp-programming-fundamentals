/*Write a C++ program that lets the user enter an integer, and then
displays one of two possible messages. One message indicates if the
given number is a multiple of 6 or a multiple of 7; the other message
indicates if the given number is neither a multiple of 6 nor a multiple of
7. Assume that the user enters a non-negative value.
*/

#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "enter x: ";
    cin >> x;

    if (x % 6 == 0 || x % 7 == 0) {
        cout << "the given number is a multiple of 6 or 7";
    }
    else {
        cout << "the given number is neither a multiple of 6 or 7";
    }
    return 0;
}
