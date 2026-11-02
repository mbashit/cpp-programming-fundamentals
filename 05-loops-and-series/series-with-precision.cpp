/*From the keyboard, enter the value x, N, E. N is the number of terms. First, you calculate the sum of these terms. Then you count the sum of the terms that are greater than E. Then you count the sum and the number of terms that are greater than E / 10*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, N, E,R=1;

    cout << "enter the number N:";
    cin >> N;
    cout << "enter the number E";
    cin >> E;
    cout << "enter the number for x ";
    cin >> x;

   double sum1 = 0;
   double item = 1;

   for (int i = 0; i < N; i++) {
       item = item / (i * 2) * pow(x, i);
       sum1 += item;
   }

   double sum2 = 0;

   while (item > E) {
       item = //...
       sum2 += item;
       cout << sum2 << endl;

   }

   while (item > E / 10) {
        // ...
       cout << item << endl;
   }

}
