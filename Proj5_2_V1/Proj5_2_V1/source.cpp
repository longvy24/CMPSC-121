// Long Vy - December 4, 2017 - Proj5_2_V1
// This program has the user input values, averages values,
// displays values, and determines which of the inputted values
// is closest and furthest from the average.

// FIND VALUE THAT IS FURTHEST FROM THE AVERAGE AND PRINT VALUE

#include<iostream>
#include<cmath>
using namespace std;

const int SIZE = 20;

float	value[SIZE] = { 0 },
		sum = 0.0,
		average,
		values,
		closest = value[0],
		farthest = value[0];

int		u;
		
		


int main(void)
{
	for (u = 0; u < SIZE; u++)									// Loop to enter values into array and sum the values
	{
		cout << "Please enter value " << u+1 << ": ";
		cin >> values;

		 while (cin.fail())											// Loop error message in case user inputs non-numbers
		{
			cin.clear();											// clear input buffer to restore cin to a usable state
			cin.ignore(INT_MAX, '\n');								// ignore last input
			cout << "You can only enter numbers.\n" << endl;

			cout << "Please enter value " << u+1 << ": ";
			cin >> values;
	    }
		
		value[u] = values;

		//1+2+3+4+5 = 15
		sum = sum + value[u];
	
	}
	
	cout << endl; 

	cout << "Entered values: ";
	for (u = 0; u < SIZE; u++)								// Loop to list all values in array
	{
		cout << value[u] << "  ";
	}
	cout << endl << endl;

	// 15/5=3
	average = sum / u; 

	//cout << "The sum of the input values is " << sum << endl;
	cout << "The average of the input values is " << average << endl;

	cout << endl;

	for ( u = 0; u < SIZE; u++)								// Loop to find values closest and farthest from the average
	 {
		 if (std::abs(average - value[u]) < std::abs(average - closest))
		{
			closest = value[u];
		}
		 if (std::abs(average - value[u]) > std::abs(average - farthest))
		{
			 farthest = value[u];
		}
	 }

  cout << "Closest to average: " << closest << endl;
  cout << "Farthest from average: "<< farthest << endl;

  cout << "Difference between closest value and average: " << std::abs(average - closest) << endl;
  cout << "Difference between farthest value and average: " << std::abs(average - farthest) << endl << endl;


	return 0;
}