// Long Vy - Proj2_1_V1 - October 18,2017
// This program will calculate the slope of a line
// from user inputs.

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main(void)
{
	float x1,
		  x2,
		  y1,
		  y2,
		  dx,
		  dy,
		  slope;

	cout << "Please enter the x value of your first point: ";
	cin >> x1;
	cout << "Please enter the y value of your first point: ";
	cin >> y1;

	cout << "Please enter the x value of your second point: ";
	cin >> x2;
	cout << "Please enter the y value of your second point: ";
	cin >> y2;
	 
	dx = (x2 - x1);
	dy = (y2 - y1);
	slope = dy/dx; 

	//pt1:(1,2), pt:2(4,4) normal
	//(4-2)/(4-1) = 2/3 (.6667) 

	//pt1:(1,1), pt:2(1,1) horizontal
	//(1-1)/(1-1) = 0 

	////pt1:(1,4), pt:2(1,5) undefine
	//(5-4)/(1-1) = undefine


	if (y2-y1 == 0 )
	{
		cout << "The slope is 0 therefore it is a horizontal line." << endl;
	}
	else if (x2-x1 == 0)
	{
		cout << "The slope is undefined." << endl;
	}
	else 
	cout << "The slope of the line is " << fixed << setprecision(4) << slope << endl;

	return 0;
}