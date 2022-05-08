#include "Header.h"

/**********************************************************
* ErrorCheckIntInput
* --------------------------------------------------------
* This function will return if the input is a valid
* float.
*
* returns true if the input is not a valid float
**********************************************************/

bool ErrorCheckIntInput(
	int& input,				// IN  - the input to check
	int min,				// IN  - the minimum value
	int max)				// IN  - the maximum value
{
	if (!(cin >> input))
	{
		cout << "\n**** Please input a number between " << min << " and " << max << " ****\n\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return true;
	}
	else if (input < min || input > max)
	{
		cout << "\n**** The number " << setw(5) << input << " is an invalid entry  ****\n";
		cout << "**** Please input a number between " << min << " and " << max << " ****\n\n";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return true;
	}
	else
	{
		cout << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return false;
	}
}