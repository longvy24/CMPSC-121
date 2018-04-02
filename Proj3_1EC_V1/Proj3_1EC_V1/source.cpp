// Long Vy - Proj3_EC1_V1 - October 18, 2017
// This program will total even and odd numbers and their averages.
// This includes the user check for negative numbers in the extra credit.

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

	int		negValue =0,
			attempts = 5;


	char	answer = 'y';


do																											// Start of program loop
{
	do																										// Start of user input loop
	{
		cout << "Please enter a positive number (enter 0 to end): ";
		cin >> value;
		
		if(value%2==0 && value>0)																			// Even number counter, sum, average, and check condition
		{
			even++;
			evenSum = evenSum += value;
			evenAvg = evenSum / even;
		}
		else if(value%2!=0 && value>0)																		// Odd number counter, sum, average, and check condition
		{
			odd++;
			oddSum = oddSum += value;
			oddAvg = oddSum / odd; 
		}
		
		if(value<0)																							// Check for user input error
		{
			negValue++;
			cout << "You have entered " << negValue	<< " out of 5 maximum attempts." << endl << endl;	
		}

		if (negValue==attempts)																				// Kill command to stop program after maximum number of attempts
		{
			cout << "You have reached the maximum number of attemtps." << endl << endl;
			exit(0);
		}
		
	}while(value!=0);																						// End of user input loop
																											 
	cout << "Even: " << even << endl;																		// Print values
	cout << "Even sum: " << evenSum << endl;																// Print values
	cout << "Even average: " << evenAvg << endl;															// Print values	
	cout << "Odd: " << odd << endl;																			// Print values	
	cout << "Odd sum: " << oddSum << endl;																	// Print values	
	cout << "Odd average: " << oddAvg << endl;																// Print values
	cout << "Negative: " << negValue << endl;																// Print values


	cout << "Would you like to continue? ";																	// User restart prompt
	cin >> answer;
	
}while(answer == 'y'|| answer == 'Y');																		// End of program loop


return 0;
}
