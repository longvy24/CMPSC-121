// Long Vy - December 9, 2017
// This program reads and prints values from a text file and outputs the same
// values in reverse in a different text file and averages the values.

#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;


const int	SIZE = 26;
	int		i,
			k;
	float	sum,
			average,
			value[SIZE];
	


int main()
{
    ifstream inFile;				//Read text file
    inFile.open("z.txt");
    while(!inFile.eof())
    {
        inFile >> value[i];			// input values into array
        i++;
    }

    inFile.close();

    for(i=0; i<26; i++)		
    {
        cout << value[i] << " " << endl << endl;	// Print values from array

		sum = sum + value[i];
    }
	
	average = sum / i;

	cout << endl;

	ofstream outFile;							// Output array into text file
	outFile.open("outData.txt");
	if (outFile.fail())
	{
		cout << "Error opening file" << endl;	
	}
		
	for (k = SIZE - 1; k >= 0; k--)				// reverse order of numbers ands output to file
	{
		outFile << value[k] << "  " << endl << endl;
	}

	outFile << "Average of the values is : " << setprecision(4)
		 << fixed << average << endl;

	outFile.close();


	cout << "Average of the values is : " << setprecision(4)
		 << fixed << average << endl;
    

	


	return 0; 
}