#pragma once
#include "Header.h"

class Sheep
{
public:
	/*****************************
	** CONSTRUCTOR & DESTRUCTOR **
	*****************************/
	Sheep();	// constructor
	~Sheep();	// destructor

	/******************
	***   MUTATORS  ***
	******************/
	void SetInitialValues(
		string sheepName,
		int sheepAge);

	/*******************
	***   ACCESSORS  ***
	*******************/
	void GetValues(
		string& sheepName,
		int& sheepAge) const;
	string GetName() const;
	int GetAge() const;

private:
	string name;	// IN & OUT - the sheep's name
	int age;		// IN & OUT - the sheep's age
};