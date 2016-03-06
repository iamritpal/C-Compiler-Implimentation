#ifndef BSTREE_CLASS_H
#define BSTREE_CLASS_H

#include <iostream>
#include "BSTreeNode.hpp"

class BSTree
{
	public:
		BSTree();
		~BSTree();
		bool find(int element);
		void insert(int element);

	private:
		BSTreeNode *root;
};

#endif