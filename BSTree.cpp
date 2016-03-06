#include "BSTree.hpp"

/*
 *	Constructor: BSTree()
 *	Nulls root node when a new tree is created.
 */

BSTree::BSTree()
{
	root = null;
}

/*
 *	insert() : Insert a new element into BSTree
 *	Create a new node with data as the new element
 *	and put it into the tree.
 */

void BSTree::insert(int element)
{
	// Create a new node with data value as element
	BSTreeNode *newNode = new BSTreeNode(element);

	if (root == null) {		// if tree is empty then set newNode as root
		root = newNode;
	}
	else
	{
		BSTreeNode *node = root;
		BSTreeNode *parent;

		for (;;) {		// loop from root to until a place is found for this newNode or if it is found in the tree
			parent = node;
			if (element < node->getData()) {			// element data is less than node data
				node = node->getLeftChild();
				if (node == null) {
					parent->setLeftChild(newNode);	// add as left child
					return;
				}
			}
			else if (element > node->getData()) {		// element data is greater than node data
				node = node->getRightChild();
				if (node == null) {
					parent->setRightChild(newNode);		// add as right child
					return;
				}
			}
			else { 		// element exists so do nothing and delete the newNode created
				delete newNode;
				return;
			}
		}
	}
}

/*
 *	find() : Find an element into the tree.
 *	Check and see if an element exists in
 *	the binary search tree.
 */

bool BSTree::find(int element) 
{
	BSTreeNode *node = root;

	if (root == null)
		return false;
	else
	{
		while (element != node->getData()) {
			if (element < node->getData()) { node = node->getLeftChild();}
			else { node = node->getRightChild();}
			if (node == null) { return false;}
		}
	}
	return true;
}

