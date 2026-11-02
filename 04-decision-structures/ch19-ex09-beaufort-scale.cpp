/*The Beaufort
[15] scale is an empirical measure that relates wind speed to
observed conditions on land or at sea. Write a C++ program that
prompts the user to enter the Beaufort number, and then displays the
corresponding description from the following table. However, if the
number entered is invalid, an error message must be displayed.
Beaufort Number Description
0 Calm
1 Light air
2 Light breeze
3 Gentle breeze
4 Moderate breeze
5 Fresh breeze
6 Strong breeze
7 Moderate gale
8 Gale
9 Strong gale
10 Storm
11 Violent storm
12 Hurricane force*/

#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "enter the Beaufort number:" << endl;
    cin >> x;

    switch (x) {
    case 1:
        cout << "calm" << endl;
        break;
    case 2:
        cout << "Light air:" << endl;
        break;
    case 3:
        cout << "Gentle breeze" << endl;
        break;
    case 4:
        cout << "Moderate breeze:" << endl;
        break;
    case 5:
        cout << "Fresh breeze:" << endl;
        break;
    case 6:
        cout << "Strong breeze: " << endl;
        break;
    case 7:
        cout << "Moderate gale:" << endl;
        break;
    case 8:
        cout << "Gale:" << endl;
        break;
    case 9:
        cout << "srong Gale" << endl;
        break;
    case 10:
        cout << " storm :" << endl;
        break;
    case 11:
        cout << "Violent storm:" << endl;
        break;
    case 12:
        cout << "Hurricane force" << endl;
        break;
    default:
        cout << "error" << endl;
    }
}
