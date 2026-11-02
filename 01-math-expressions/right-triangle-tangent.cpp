#define _USE_MATH_DEFINES


#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	double angle_in_degree, length_of_adj_side, length_of_opp_side;
	
	cout << "enter the angle in degrees";
	cin >> angle_in_degree;
	cout << "enter the lenth of the adj side";
	cin >> length_of_adj_side;

	length_of_opp_side = tan(angle_in_degree * M_PI / 180) * length_of_adj_side;

	cout << "the length of the opposite side is" << length_of_opp_side << endl;

	return 0;

}
