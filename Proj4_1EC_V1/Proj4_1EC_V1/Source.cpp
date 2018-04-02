// Long Vy - December 4, 2017 - Proj4_1EC_V1
// This program uses functions to print text

//USE FUNCTION TO CREATE A MENU SO USERS CAN SELECT WHICH SYMBOL THEY WANT TO USE


#include <iostream>
#include <string>
using namespace std;

int	rows,
	columns,
	fields,
	choice = 0, 
	i,
	j,
	k;

//char symbol = '*';
string  symbol[5] = { "*", "!", "@", "#", "$" };


void menu(void)
{
	cout <<"\n********************************************"							// Menu for user choice
		<< "\n*        Choose your symbol                *"
		<< "\n********************************************"
		<< endl
		<< "\n\t1. " << symbol[0]
		<< "\n\t2. " << symbol[1]
		<< "\n\t3. " << symbol[2]
		<< "\n\t4. " << symbol[3]
		<< "\n\t5. " << symbol[4]
		<< endl << endl;

	do {
		cout << "Please choose your symbol: ";
		cin >> choice;
		if (choice < 1 || choice > 5)
		{
			cout << "Please enter a number between 1 and 5." << endl << endl;		
		}
		} while (choice < 1 || choice > 5);
}


void input(void)																	// User input function for rows, columns, and fields
{
	do {
			cout << "Please enter the number of rows [1-5]: ";
			cin >> rows;

			if (rows <= 0 || rows > 5)												// User trap for invalid inputs stops program
			{
				cout << "Please enter a valid number between 1 and 5." << endl << endl;
			}
	} while (rows <= 0 || rows > 5 );

	do {
			cout << "Please enter the number of columns [5-50]: ";
			cin >> columns;

			if (columns < 5 || columns > 50)												// User trap for invalid inputs stops program
			{
				cout << "Please enter a valid number between 5 and 50." << endl << endl;
			}

		} while (columns < 5 || columns >50);

	do {
			cout << "Please enter the number of fields [3-10]: ";
			cin >> fields;

			if (fields < 3 || fields > 10)													// User trap for invalid inputs stops program
			{
				cout << "Please enter a valid number between 3 and 10" << endl << endl;
			}
		} while (fields < 3 || fields > 10);

}

void loopfunction(void)
{

	for (k = 1; k <= fields; k++)														// Loop for number of fields
	{
		cout << endl << endl << endl;

		for (i = 1; i <= rows; i++)														// Loop for number of rows
		{
			for (j = 1; j <= columns; j++)												// Loop for number of columns
			{
				cout << symbol[choice-1];

			}
			cout << endl;
		}

	}

}


int main(void)
{
	input();
	menu();
	loopfunction();

	return 0;
}
