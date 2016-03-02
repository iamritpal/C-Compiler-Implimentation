// Constructor

BSTreeNode::BSTreeNode()
{
	
}

void BSTreeNode::setData(int value)
{
	data = value;
}

int BSTreeNode::getData(void)
{
	return data;
}

BSTreeNode* getLeftChild(void)
{
	return leftChild;
}

BSTreeNode* getRightChild(void)
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
