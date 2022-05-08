#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int AR_SIZE = 50;   // Max size of the sheep array 

enum MenuOptions
{
	EXIT,
	ADD_SHEEP,
	FIRST_SHEEP,
	FIND_SHEEP,
	LIST_SIZE,
	OUTPUT_LIST,
	CLEAR_LIST
};

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
	int max);				// IN  - the maximum value