

class BSTreeNode
{
	public:
		BSTreeNode();
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