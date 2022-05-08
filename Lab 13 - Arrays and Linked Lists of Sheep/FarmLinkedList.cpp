#include "FarmLinkedList.h"

/**********************************************************
* FarmList
* --------------------------------------------------------
* This function initializes the sheep count to 0.
*
* returns nothing
**********************************************************/

FarmLinkedList::FarmLinkedList()
{
	head = NULL;
	sheepCount = 0;
}

/**********************************************************
* ~FarmList
* --------------------------------------------------------
* This function deallocates the memory used by the list.
*
* returns nothing
**********************************************************/

FarmLinkedList::~FarmLinkedList()
{
	SheepNode* current = head;

	while (current != NULL)
	{
		head = head->next;
		delete current;
		current = head;
	}
}

/**********************************************************
* AddSheep
* --------------------------------------------------------
* This function adds a sheep to the list.
*
* returns nothing
**********************************************************/

void FarmLinkedList::AddSheep(
	Sheep newSheep)				// IN  - the sheep to add
{
	SheepNode* newNode = new SheepNode;
	if (newNode != NULL)
	{
		newNode->sheep = newSheep;
		newNode->next = NULL;

		if (head == NULL)
		{
			head = newNode;
		}
		else
		{
			SheepNode* current = head;
			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = newNode;
		}
		sheepCount++;
	}
	else
	{
		cout << "Out of memory.\n";
	}
}

/**********************************************************
* ClearList
* --------------------------------------------------------
* This function clears the list.
*
* returns nothing
**********************************************************/

void FarmLinkedList::ClearList()
{
	SheepNode* current = head;
	SheepNode* next;

	while (current != NULL)
	{
		next = current->next;
		delete current;
		current = next;
	}
	head = NULL;
	sheepCount = 0;
}

/**********************************************************
* FindSheep
* --------------------------------------------------------
* This function finds a sheep in the list.
*
* returns Sheep
**********************************************************/

Sheep FarmLinkedList::FindSheep(
	string sheepName) const			// IN  - the input to check
{
	Sheep sheep;
	SheepNode* current;

	for (current = head; current != NULL; current = current->next)
	{
		if (current->sheep.GetName() == sheepName)
		{
			sheep = current->sheep;
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

Sheep FarmLinkedList::GetFirstSheep() const
{
	if (head != NULL)
	{
		return head->sheep;
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

int FarmLinkedList::TotalSheep() const
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

void FarmLinkedList::DisplaySheepTable() const
{
	if (sheepCount != 0)
	{
		cout << "NAME           AGE\n";
		cout << "-------------- ---\n";

		SheepNode* current = head;
		while (current != NULL)
		{
			cout << setw(16) << current->sheep.GetName() << current->sheep.GetAge() << endl;
			current = current->next;
		}
		cout << endl;
	}
	else
	{
		cout << "The list is empty!\n\n";
	}
}