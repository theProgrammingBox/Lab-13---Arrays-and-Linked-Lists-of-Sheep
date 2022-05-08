#pragma once
#include "Sheep.h"

class FarmList
{
public:
	FarmList();		// constructor
	~FarmList();	// destructor

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
	Sheep farmArray[AR_SIZE];
	int sheepCount;
};