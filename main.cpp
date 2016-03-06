#include <iostream>
#include "BSTree.hpp"
using namespace std;

int main(int argc, char *argv[])
{
	BSTree *BinarySearchTree = new BSTree();

	if (BinarySearchTree->find(5))
		cout << "Found 5";
	else
	{
		cout << "Insert 5" << endl;
		BinarySearchTree->insert(5);
		if (BinarySearchTree->find(5))
			cout << "Found 5";
	}
	return 0;
}

