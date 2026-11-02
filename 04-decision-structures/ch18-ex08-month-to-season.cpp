/*Write a C++ program that prompts the user to enter the number of a
month between 1 and 12, and then displays the corresponding season.
Assume that the user enters a valid value. It is given that
Winter includes months 12, 1, and 2
Spring includes months 3, 4, and 5
Summer includes months 6, 7, and 8
Fall (Autumn) includes months 9, 10, and 11*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m;
    string months[] = { "Jan", "Feb", "Mar", "Apr", "May",
                       "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    cout << "Enter a month number: ";
    cin >> m;

    if (m == 12 || m == 1 || m == 2) {
        cout << "it's Winter season ";
        
    }
    else if (m == 3 || m == 4 || m == 5) {
        cout << "its spring season ";
    }
    else if (m == 6 || m == 7 || m == 8) {
        cout << "it's summer season ";
    }
    else if (m == 9 || m == 10 || m == 11) {
        cout << "it's Fall(Autumn) ";
    }
    else {
        cout << "Error";
    }
    return 0;
}
