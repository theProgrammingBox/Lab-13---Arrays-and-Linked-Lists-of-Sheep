#include "Header.h"
#include "FarmList.h"
#include "FarmLinkedList.h"

/**********************************************************
 *
 * Arrays and Linked Lists of Sheep
 *_________________________________________________________
 * This program provides a menu for the user to add,
 * find, and output sheep. It also provides a menu for
 * the user to clear the list. There are two types of
 * sheep stored in the program: an array and a linked
 * list. The array is used to store the sheep in the
 * order they are added. The linked list is used to
 * store the sheep in the order they are added.
 *_________________________________________________________
 * INPUT:
 * input: The user enters a command to select an option
 * from the menu.
 * sheepName: The sheep name is used to store the sheep
 * name.
 * sheepAge: The sheep age is used to store the sheep age.
 *
 *
 * OUTPUT:
 * sheepName: The sheep name is outputted to the user.
 * sheepAge: The sheep age is outputted to the user.
 * sheepList: The sheep list is outputted to the user.
 *********************************************************/

int main()
{
	int input;					// INPUT	  - User's menu selection
	bool running;				// CALC		  - Program loop
	//FarmList sheepList;		// CALC & OUT - Sheep list
	FarmLinkedList sheepList;	// CALC & OUT - Sheep linked list
	string sheepName;			// INPUT	  - Sheep name
	int sheepAge;				// INPUT	  - Sheep age
	Sheep tempSheep;			// CALC		  - Temporary sheep

	running = true;
	cout << left;

	while (running)
	{
		do
		{
			cout << "*************************************\n";
			cout << "* WELCOME TO THE SHEEP LIST MANAGER *\n";
			cout << "*************************************\n\n";
			cout << "SHEEP LIST MANAGER\n";
			cout << "1 - Add Sheep\n";
			cout << "2 - Output 1st Sheep\n";
			cout << "3 - Find Sheep\n";
			cout << "4 - List Size\n";
			cout << "5 - Output List\n";
			cout << "6 - Clear List\n";
			cout << "0 - Exit\n";
			cout << "Enter a command: ";
		} while (ErrorCheckIntInput(input, 0, 6));

		switch ((int)input)
		{
		case EXIT:
			running = false;
			break;
		case ADD_SHEEP:
			cout << "Sheep Name: ";
			getline(cin, sheepName);
			do
			{
				cout << "Sheep Age:  ";
			} while (ErrorCheckIntInput(sheepAge, 0, 9));
			cout << "The sheep...\n"
				<< "Sheep Name: " << sheepName << "\n"
				<< "Sheep Age:  " << sheepAge << "\n"
				<< "Has been added!\n\n";
			tempSheep.SetInitialValues(sheepName, sheepAge);
			sheepList.AddSheep(tempSheep);
			break;
		case FIRST_SHEEP:
			tempSheep = sheepList.GetFirstSheep();
			tempSheep.GetValues(sheepName, sheepAge);
			if (sheepName == "")
			{
				cout << "Nobody is in front - the list is empty!\n\n";
			}
			else
			{
				cout << "NAME           AGE\n";
				cout << "-------------- ---\n";
				cout << setw(16) << sheepName << sheepAge << "\n\n";
				cout << "Is at the front of the list.\n\n";
			}
			break;
		case FIND_SHEEP:
			if (sheepList.TotalSheep() != 0)
			{
				cout << "Who are you looking for? ";
				getline(cin, sheepName);
				tempSheep = sheepList.FindSheep(sheepName);
				tempSheep.GetValues(sheepName, sheepAge);
				cout << endl;
				if (sheepName == "")
				{
					cout << "There are no sheep to be found!\n\n";
				}
				else
				{
					cout << "NAME           AGE\n";
					cout << "-------------- ---\n";
					cout << setw(16) << sheepName << sheepAge << "\n\n";
					cout << "Has been found.\n\n";
				}
			}
			else
			{
				cout << "There are no sheep to be found!\n\n";
			}
			break;
		case LIST_SIZE:
			if (sheepList.TotalSheep() != 0)
			{
				cout << "There are " << sheepList.TotalSheep() << " sheep in the list!\n\n";
			}
			else
			{
				cout << "The list is empty!\n\n";
			}
			break;
		case OUTPUT_LIST:
			if (sheepList.TotalSheep() != 0)
			{
				sheepList.DisplaySheepTable();
				cout << "There are " << sheepList.TotalSheep() << " sheep in the list!\n\n";
			}
			else
			{
				cout << "The list is empty!\n\n";
			}
			break;
		case CLEAR_LIST:
			if (sheepList.TotalSheep() != 0)
			{
				sheepList.ClearList();
				cout << "The list has been cleared!\n\n";
			}
			else
			{
				cout << "The list is empty!\n\n";
			}
			break;
		default:
			cout << "Invalid input.\n";
			break;
		}
	}

	cout << right;
	return 0;
}