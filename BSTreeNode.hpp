#ifndef BSTREENODE_CLASS_H
#define BSTREENODE_CLASS_H

#define null 0

class BSTreeNode
{
	public:
		BSTreeNode(int value);
		~BSTreeNode();

		int getData(void);
		BSTreeNode* getLeftChild(void);
		BSTreeNode* getRightChild(void);

		void setData(int value);
		void setLeftChild(BSTreeNode* nodePtr);
		void setRightChild(BSTreeNode* nodePtr);
		
	private:
		int data;
		BSTreeNode *leftChild;
		BSTreeNode *rightChild;
};

#endif
