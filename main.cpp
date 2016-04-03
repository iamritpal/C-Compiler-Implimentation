#include <iostream>
#include <string>
#include "BSTree.hpp"
#include "Stack.hpp"
#include <stdlib.h>

using namespace std;

int charToInt(char ch);

// Test functions
void BinarySearchTreeTest(int nmbItems);
void StackTest(int nmbItems);

void PrintMainMenu(void);
int getUserMenuSelection(void);
int isValidSelection(int min, int max, int selection);

#define NmbMenuOptions 4
string menu[NmbMenuOptions] =
{
	"1. Test BinarySearchTree Data Structure Implementation.",
	"2. Test Stack Data Structure Implementation.",
	"3. Perform bottom up parsing.",
	"4. Quit"
};

// Bottom up parsing
#define NmbOfStatements 5
#define HandleMaxSize 100
char HandleSequence[NmbOfStatements][HandleMaxSize];	// Define hadle sequence

int main(int argc, char *argv[])
{
	int MainSelect;		// Main menu selection
	int SubSelect;		// Sub menu selection
	char chBuff[50];	// Character selection buffer e.g. allows inputs of a, b etc

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
					cout << "Enter value [1,100] for number random integers ";
					cout << "to insert in Stack: " << endl;

					SubSelect = getUserMenuSelection();
					if (isValidSelection(1,100,SubSelect))
						StackTest(SubSelect);
					else
						cout << "Invalid input entered!" << endl;

					break;

				case 3:
					cout << "Give the following grammar:" << endl;
					cout << "\tA -> id = E" << endl;
					cout << "\tE -> E +T " << endl;
					cout << "\tE -> E-T │T" << endl;
					cout << "\tT -> T*F │ T/F │ F" << endl;
					cout << "\tF -> (E) │id" << endl;
					cout << "\tid -> a│b│c.....|x|y|z" << endl;
					cout << "Perform bottom up parsing on the following statements:" << endl;
					cout << " a. a=b+c-d" << endl;
					cout << " b. a=b*c+d*e" << endl;
					cout << " c. a=b*c*d" << endl;
					cout << " d. a=a/b-c*d" << endl;
					cout << " e. a=b*c+d*e" << endl;
					cout << "Enter value: ";
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); 	// flush cin input stream
					cin.getline(chBuff,50); 
					cout << chBuff[0];
					break;

				case 4:
					exit(0);	// Exit program with a success code.
					break;
			}

		}
		else
		{
			cout << "You have entered invalid input!" << endl;
		}
		cin.clear();
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

	cout << endl << "Preorder Traversal: ";
	BinarySearchTree->BSTreeTraverse(PREORDER);

	cout << endl << "Inorder Traversal: ";
	BinarySearchTree->BSTreeTraverse(INORDER);

	cout << endl << "Post order Traversal: ";
	BinarySearchTree->BSTreeTraverse(POSTORDER);

	cout << endl;
	cout << "Search for a value in the tree: ";
	cin >> value;

	if (BinarySearchTree->find(value))
		cout << "Found " << value;
	else
		cout << "Could not find " << value;
	cout << endl;
	BinarySearchTree->~BSTree();
}

//*********************************************
//	StackTest()
//	Q3 - Write a program to read in a random sequence 
//  of letters A, B, C, D, etc... as user input and store
//  the input sequence into a stack. As the second user input
//  of an integer, write the code to pop 
//  off the number of symbols specified by the input 
//  integer from the stack.
//	(perform demo in your presentation)
//*********************************************

void StackTest(int nmbItems)
{
	int i=0;
	int value;

	Stack *vStack = new Stack(nmbItems);

	while (i < nmbItems)
	{
		value = rand()%10;		// Random integer value
		cout << value;
		if (i < (nmbItems-1))
			cout << ", ";
		vStack->push(value);
		i++;
	}

	cout << endl;
	cout << "Pop off values from stack" << endl;

	while (!vStack->isEmpty())
	{
		cout << vStack->pop() << ", ";
	}

	vStack->~Stack();
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
