#include "FarmList.h"

/**********************************************************
* FarmList
* --------------------------------------------------------
* This function initializes the sheep count to 0.
*
* returns nothing
**********************************************************/

FarmList::FarmList()
{
	sheepCount = 0;
}

/**********************************************************
* ~FarmList
* --------------------------------------------------------
* This function deallocates the memory used by the list.
*
* returns nothing
**********************************************************/

FarmList::~FarmList() {}

/**********************************************************
* AddSheep
* --------------------------------------------------------
* This function adds a sheep to the list.
*
* returns nothing
**********************************************************/

void FarmList::AddSheep(
	Sheep newSheep)			// IN  - the sheep to add
{
	if (sheepCount < AR_SIZE)
	{
		farmArray[sheepCount] = newSheep;
		sheepCount++;
	}
	else
	{
		cout << "The list is full.\n";
	}
}

/**********************************************************
* ClearList
* --------------------------------------------------------
* This function clears the list.
*
* returns nothing
**********************************************************/

void FarmList::ClearList()
{
	sheepCount = 0;
}

/**********************************************************
* FindSheep
* --------------------------------------------------------
* This function finds a sheep in the list.
*
* returns Sheep
**********************************************************/

Sheep FarmList::FindSheep(
	string sheepName) const	// IN  - sheep name
{
	Sheep sheep;

	for (int i = 0; i < sheepCount; i++)
	{
		if (farmArray[i].GetName() == sheepName)
		{
			sheep = farmArray[i];
		}
	}

	return sheep;
}

/**********************************************************
* GetFirstSheep
* --------------------------------------------------------
* This function returns the first sheep in the list.
*
* returns Sheep
**********************************************************/

Sheep FarmList::GetFirstSheep() const
{
	if (sheepCount > 0)
	{
		return farmArray[0];
	}
	else
	{
		return Sheep();
	}
}

/**********************************************************
* TotalSheep
* --------------------------------------------------------
* This function returns the total number of sheep in the
*
* returns int
**********************************************************/

int FarmList::TotalSheep() const
{
	return sheepCount;
}

/**********************************************************
* DisplaySheepTable
* --------------------------------------------------------
* This function displays the sheep table.
*
* returns nothing
**********************************************************/

void FarmList::DisplaySheepTable() const
{
	if (sheepCount != 0)
	{
		cout << "NAME           AGE\n";
		cout << "-------------- ---\n";

		for (int i = 0; i < sheepCount; i++)
		{
			cout << setw(16) << farmArray[i].GetName() << farmArray[i].GetAge() << endl;
		}
		cout << endl;
	}
	else
	{
		cout << "The list is empt!\n\n";
	}
}