/*Write a C++ program that prompts the user to enter two numbers. If the
first number given is greater than the second one, the program must
swap their values. In the end, the program must display the numbers,
always in ascending order.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "enter the numbers" <<endl;
    cin >> a >> b;

    if (a > b) {
        c = a;
        a = b;
        b = c;
        
    }
    cout <<" numbers in ascending order" << a << b << endl;
}
