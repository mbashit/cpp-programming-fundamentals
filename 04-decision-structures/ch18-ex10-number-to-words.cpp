/*Write a C++ program that prompts the user to enter a number between
1.0 and 4.9, and then displays the number as English text. For example,
for the number 2.3, it must display “Two point three”. Assume that the
user enters a valid value. Try not to check each real number
individually (1.0, 1.1, 1.2, … 4.9). Find a more clever way!
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    double num;
    int x, y;

    cout << "enter the number (1.0 - 4.9) ";
    cin >> num;

    x = (int)(num);
    y = (int)(num * 10) % 10;

    if (x == 1) {
        cout << "one" ;
    }
    else if (x == 2) {
        cout << "two" ;
    }
    else if (x == 3) {
        cout << "three" ;
    }
    else if (x == 4) {
        cout << "four" ;
    }
    cout << " " << "point" <<" ";

    if (y == 1) {
        cout << "one" << endl;
    }
    else if (y == 2) {
        cout << "two" << endl;
    }
    else if (y == 3) {
        cout << "three" << endl;
    }
    else if (y == 4) {
        cout << "four" << endl;
    }
    else if (y == 5) {
        cout << "five" << endl;
    }
    else if (y == 6) {
        cout << "six" << endl;
    }
    else if (y == 7) {
        cout << "seven" << endl;
    }
    else if (y == 8) {
        cout << "eight" << endl;
    }
    else if (y == 9) {
        cout << "nine" << endl;
    }
    else {
        cout << "zero" << endl;
    }
       
    return 0;
    
}
