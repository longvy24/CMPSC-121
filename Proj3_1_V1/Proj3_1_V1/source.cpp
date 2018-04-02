// Long Vy - Proj3_1_V1 - October 18, 2017
// This program will total even and odd numbers and their averages.

#include<iostream>
#include<string>
using namespace std;

int main (void)
{

	int		value,
			even = 0,
			odd = 0,
			evenSum = 0,
			evenAvg = 0,
			oddSum = 0,
			oddAvg = 0;

	char	answer = 'y';


do
{
	do
	{
		cout << "Please enter a positive number (enter 0 to end): ";
		cin >> value;

		if(value%2==0 && value>0)
		{
			even++;
			evenSum = evenSum += value;
			evenAvg = evenSum / even;
		}
		else if(value%2!=0 && value>0)
		{
			odd++;
			oddSum = oddSum += value;
			oddAvg = oddSum / odd; 
		}
			
		
	}while(value!=0);

	cout << "Even: " << even << endl;
	cout << "Even sum: " << evenSum << endl;
	cout << "Even average: " << evenAvg << endl;
	cout << "Odd: " << odd << endl;				
	cout << "Odd sum: " << oddSum << endl;		
	cout << "Odd average: " << oddAvg << endl;

	cout << "Would you like to continue? ";
	cin >> answer;
	
}while(answer == 'y'|| answer == 'Y');


return 0;
}
