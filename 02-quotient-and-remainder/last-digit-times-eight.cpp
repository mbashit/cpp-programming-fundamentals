#include <iostream>
using namespace std;

int main()
{
    int last_digit, number, N;

    cout << "enter a four digit integer: ";
    cin >> number;
     
    last_digit = number % 10;

    N = last_digit * 8;

    cout << "th result is " << N << endl;

    return 0;
}
