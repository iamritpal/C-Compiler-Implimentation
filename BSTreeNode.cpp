#include "BSTreeNode.hpp"

BSTreeNode::BSTreeNode(int value)
{
	data = value;
	leftChild = null;
	rightChild = null;
}

void BSTreeNode::setData(int value)
{
	data = value;
}

int BSTreeNode::getData(void)
{
	return data;
}

BSTreeNode* BSTreeNode::getLeftChild(void)
{
	return leftChild;
}

BSTreeNode* BSTreeNode::getRightChild(void)
{
	return rightChild;
}

void BSTreeNode::setLeftChild(BSTreeNode* nodePtr)
{
	leftChild = nodePtr;
}

void BSTreeNode::setRightChild(BSTreeNode* nodePtr)
{
	rightChild = nodePtr;
}
