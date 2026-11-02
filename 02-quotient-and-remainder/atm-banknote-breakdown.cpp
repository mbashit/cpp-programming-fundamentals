#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
	int amount_of_money,note_1,note_2,note_3,note_4,r;

	cout << "enter the amount to withdraw:";
	cin >> amount_of_money;

	note_1 = (int)(amount_of_money / 20);
	r = amount_of_money % 20;

	note_2 = (int)(r / 10);
	r = r % 10;

	note_3 = (int)(r / 5);
	note_4 = r % 5;

	cout << note_1 <<  "note(s) of $20 " << note_2 <<  "note(s) of $10" << endl;
	cout <<  note_3 <<  "note(s) of $5"<<   note_4  << "note(s) of $1" << endl;

	


   
}
