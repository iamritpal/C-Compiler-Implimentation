#ifndef BSTREE_CLASS_H
#define BSTREE_CLASS_H

#include <iostream>
#include "BSTreeNode.hpp"
using namespace std;

#define PREORDER 0
#define INORDER 1
#define POSTORDER 2

class BSTree
{
	public:
		BSTree();
		~BSTree();
		bool find(int element);
		void insert(int element);
		void BSTreeTraverse(int orderType);
		void inOrder(BSTreeNode* tree);
		void preOrder(BSTreeNode* tree);
		void postOrder(BSTreeNode* tree);

	private:
		BSTreeNode *root;
};

#endif