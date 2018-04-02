// Long Vy - Proj1_1_V1 - October 18, 2017
// This project will compute the sine, cosine, and tangent
// functions in radians.

#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>

using namespace std;

int main(void)
{

	float	degree,
			conversion;

	const float PI = 3.14159;

	cout << "Please enter degree value you would like to convert to radians: ";
	cin >> degree;

	conversion = degree /57.2957795130; //(PI / 180);

	// sin(1.7453) = 0.9848
	// cos(1.7453) = -0.1736
	// tan(1.7453) = -5.6722

	cout << "The sine value of " << fixed << setprecision(4) << conversion << " is "  << sin(conversion) << endl;
	cout << "The cosine value of " << fixed << setprecision(4) << conversion << " is " << cos(conversion) << endl;
	cout << "The tangent value of " << fixed << setprecision(4) << conversion << " is " << tan(conversion) << endl;

	return 0;
}