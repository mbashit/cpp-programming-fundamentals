/*Write a C++ program that prompts the user to enter three temperature
values measured at three different points in New York, and then
displays the message “Heat Wave” if the average value is greater than
60 degrees Fahrenheit.*/

#include <iostream>
using namespace std;

int main()
{
    int temp1, temp2, temp3;
  

    cout << "enter the temperatures measured at three different points in New york " << endl;
    cin >> temp1 >> temp2 >> temp3 ;

    double avg;
    avg = (temp1 + temp2 + temp3) / 3.0;

    if (avg > 60) {
        cout << "Heat Wave" << endl;
    }


    }
