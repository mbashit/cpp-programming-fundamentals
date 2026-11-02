/*Write a C++ program that prompts the user to enter a string, and then
displays the message “Uppercase” when the given string contains only
uppercase characters*/

#include <iostream>
#include <string>
#include<boost/algorithm/string.hpp>
using namespace boost::algorithm;

using namespace std;


int main()
{
    string  word;

    cout << "enter the string";
    cin >> word;

    if (to_upper_copy(word) == word) {
        cout << "Uppercase" << endl;
    }
}
