// Long Vy - October 20, 2017 - Proj4_1_V1
// This program uses functions to print text


#include <iostream>
#include <string>
using namespace std;

int	rows,
	columns,
	fields,
	i,
	j,
	k;

char symbol = '*';



void input(void)																	// User input function for rows, columns, and fields
{
	do {
		cout << "Please enter the number of rows [1-5]: ";
		cin >> rows;

		if (rows <= 0 || rows > 5)												// User trap for invalid inputs stops program
		{
			cout << "Please enter a valid number between 1 and 5." << endl << endl;
		}
	} while (rows <= 0 || rows > 5);

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
		
for (k = 1; k <= fields; k++)
	{
		cout << endl << endl << endl;

		for (i = 1; i <= rows; i++)
		{
			for (j = 1; j <= columns; j++)
			{
				cout << symbol;
			
			}
			cout << endl;
		}

	}

}


int main(void)
{

	input();
	loopfunction();

	return 0;
}
