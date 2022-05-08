#pragma once
#include "Sheep.h"

class FarmLinkedList
{
public:
	FarmLinkedList();	// constructor
	~FarmLinkedList();	// destructor

	/******************
	***   MUTATORS  ***
	******************/
	void AddSheep(Sheep newSheep);
	void ClearList();

	/*******************
	***   ACCESSORS  ***
	*******************/
	Sheep FindSheep(string sheepName) const;
	Sheep GetFirstSheep() const;
	int TotalSheep() const;
	void DisplaySheepTable() const;

private:
	struct SheepNode
	{
		Sheep sheep;
		SheepNode* next;
	};
	SheepNode* head;
	int sheepCount;
};