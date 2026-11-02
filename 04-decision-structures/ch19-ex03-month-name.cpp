/*Write a C++ program that prompts the user to enter the number of a
month, and then displays the corresponding name (January for 1,
February for 2, and so on). If the value entered is invalid, an error
message must be displayed.
*/

#include <iostream>
using namespace std;

int main()
{
    int month;

    cout << "enter the number of  a  month";
    cin >> month;

    switch (month) {
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;
        break;
        case 3:
            cout << "march" << endl;
            break;
        case 4:
            cout << "april" << endl;
            break;
        case 5:
            cout << "may" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
                break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
        default:
            cout << "invalid input" << endl;
    }
    return 0;
}
