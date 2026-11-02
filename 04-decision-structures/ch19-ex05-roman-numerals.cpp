/*Write a C++ program that prompts the user to enter a number between
1 and 10, and then displays the corresponding Roman numeral.
However, if the choice entered is invalid, an error message must be
displayed.*/

#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "enter number (1-10)";
    cin >> x;

    switch (x) {
    case 1:
        cout << "I" << endl;
        break;
    case 2:
        cout << "II" << endl;
        break;
    case 3:
        cout << "III" << endl;
        break;
    case 4:
        cout << "IV" << endl;
        break;
    case 5:
        cout << "V" << endl;
        break;
    case 6:
        cout << "VI" << endl;
        break;
    case 7:
        cout << "VII" << endl;
        break;
    case 8:
        cout << "VIII" << endl;
        break;
    case 9:
        cout << "IX" << endl;
        break;
    case 10:
        cout << "X" << endl;
        break;
    default:
        cout << "invalid input" << endl;
    }
    return 0;
}
