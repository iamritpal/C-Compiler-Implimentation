#include <iostream>
#include <string>
#include "BSTree.hpp"
using namespace std;

// Test functions
void BinarySearchTreeTest(int nmbItems);

void PrintMainMenu(void);
int getUserMenuSelection(void);
int isValidSelection(int min, int max, int selection);

#define NmbMenuOptions 3
string menu[NmbMenuOptions] =
{
	"1. Test BinarySearchTree Data Structure Implementation.",
	"2. Test Stack Data Structure Implementation.",
	"3. Quit"
};

int main(int argc, char *argv[])
{
	int MainSelect;		// Main menu selection
	int SubSelect;		// Sub menu selection

	for(;;)
	{
		PrintMainMenu();

		MainSelect = getUserMenuSelection();

		if (isValidSelection(1,NmbMenuOptions,MainSelect))	// Check valid selection
		{
			switch(MainSelect)
			{
				case 1:
					cout << "Enter value [1,100] for number random integers ";
					cout << "to insert in BSTree: " << endl;

					SubSelect = getUserMenuSelection();
					if (isValidSelection(1,100,SubSelect))
						BinarySearchTreeTest(SubSelect);
					else
						cout << "Invalid input entered!" << endl;
					break;

				case 2:
					break;

				case 3:
					exit(0);	// Exit program with a success code.
					break;
			}

		}
		else
		{
			cout << "You have entered invalid input!" << endl;
		}
	}

	//cin >> ans;

	//case()
	

	// Read program source file character by character
	/*
	char ch;
	string source = "samplesource.c";

	ifstream inFile;
    inFile.open(source.c_str());

    if (inFile.fail())		// check for successful file open
    {
        cout << "ERROR - Unable to open file " << source << endl;
        cout << "Please check the filename and retry." << endl;
        exit(1);
    }
    else
    {
        while (inFile.get(ch))		// Read next character until end of file
            cout << ch << endl;
    }*/
    
	return 0;
}

//*********************************************
//	BinarySearchTreeTest()
//	Q1 - Write a program to read in a random 
//	sequence of integers as user input and build
//	a binary search tree. 
//	(perform demo in your presentation)
//*********************************************

void BinarySearchTreeTest(int nmbItems)
{
	int i=0;
	int value;

	BSTree *BinarySearchTree = new BSTree();
	
	while (i < nmbItems)
	{
		value = rand()%10;		// Random integer value
		cout << value;
		if (i < (nmbItems-1))
			cout << ", ";
		BinarySearchTree->insert(value);
		i++;
	}

	cout << endl;
	cout << "Entered " << nmbItems << " random values into BSTree Data Structure ..." << endl;

	cout << "Search for a value: ";
	cin >> value;

	if (BinarySearchTree->find(value))
		cout << "Found " << value;
	else
		cout << "Could not find " << value;
	cout << endl;
	BinarySearchTree->~BSTree();
}


void PrintMainMenu(void)
{
	int i;

	cout << endl;
	cout << "Please select one of the following options:" << endl;

	for (i=0; i < NmbMenuOptions; i++)
	{
		cout << menu[i] << endl;	
	}
}

int getUserMenuSelection(void)
{
	int user_input; 
	cout << "Enter value: ";
	cin >> user_input;
	return(user_input);
}

int isValidSelection(int min, int max, int selection)
{
	if ((selection >= min) && (selection <= max))
		return(1);
	return(0);
}
