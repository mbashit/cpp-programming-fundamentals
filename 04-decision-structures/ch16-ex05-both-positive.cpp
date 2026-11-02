/*Write a C++ program that prompts the user to enter two numbers, and
then displays the message “Positive” when both given numbers are
positives.*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    
    cout << "enter the numbers" << endl;
    cin >> x >> y;

    if ((x > 0) && (y > 0)) {
        cout << "positive" << endl;
    }
}
