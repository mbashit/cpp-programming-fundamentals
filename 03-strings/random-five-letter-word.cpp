/*Write a C++ program that creates and displays a random word
consisting of five letters. The first letter must be a capital letter.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	string alphabets, random_word;
	srand(time(NULL));

	alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	cout << alphabets[rand() % 26] <<
		alphabets[rand() % 26] <<
		alphabets[rand() % 26] <<
		alphabets[rand() % 26] <<
		alphabets[rand() % 26] << endl;

}
