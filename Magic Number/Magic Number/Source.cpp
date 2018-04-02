#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int		number,
			magicNum;

	char	answer = 'y';

	

	srand(time(NULL));

	magicNum = rand() % 100 + 1;

do
	{	
	do
		{
		cout << "Please enter a positive number [1-100]: ";
		cin >> number;
	
		if (number < 1 || number > 100)
		{
			cout << "Please enter a number from 1 to 100!" << endl << endl;
		}

		else if (number < magicNum)
		{
			cout << "Guess higher!" << endl;
		}
		else if (number > magicNum)
		{
			cout << "Guess lower!" << endl;
		}

		} while (number != magicNum);

		cout << "The magic number is " << magicNum << "!" << endl << endl;

		cout << "Would you like to play again? ";
		cin >> answer;

	} while (answer == 'y' || answer == 'Y');
	

	return 0;
}