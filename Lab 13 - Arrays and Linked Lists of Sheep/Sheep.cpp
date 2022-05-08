#include "Sheep.h"

/**********************************************************
* Sheep
* --------------------------------------------------------
* This function will set the initial values for the sheep
* name and age.
*
* returns nothing
**********************************************************/

Sheep::Sheep()
{
	name = "";
	age = 0;
}

/**********************************************************
* ~Sheep
* --------------------------------------------------------
* This function is the destructor for the sheep class.
*
* returns nothing
**********************************************************/

Sheep::~Sheep() {}

/**********************************************************
* SetInitialValues
* --------------------------------------------------------
* This function will set the initial values for the sheep
*
* returns nothing
**********************************************************/

void Sheep::SetInitialValues(
	string sheepName,			// IN  - the name of the sheep
	int sheepAge)				// IN  - the age of the sheep
{
	name = sheepName;
	age = sheepAge;
}

/**********************************************************
* GetValues
* --------------------------------------------------------
* This function will get the sheep's name and age.
*
* returns nothing
**********************************************************/

void Sheep::GetValues(
	string& sheepName,		// OUT - the name of the sheep
	int& sheepAge) const	// OUT - the age of the sheep
{
	sheepName = name;
	sheepAge = age;
}

/**********************************************************
* GetName
* --------------------------------------------------------
* This function will get the sheep's name.
*
* returns string
**********************************************************/

string Sheep::GetName() const
{
	return name;
}

/**********************************************************
* GetAge
* --------------------------------------------------------
* This function will get the sheep's age.
*
* returns int
**********************************************************/

int Sheep::GetAge() const
{
	return age;
}