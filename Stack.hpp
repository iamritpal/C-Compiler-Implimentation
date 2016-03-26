#ifndef BSTREE_CLASS_H
#define BSTREE_CLASS_H

#include <vector>
#include <iostream>

class Stack
{
	public:
		Stack(int max);
		~Stack();
		void push(int element);
		int pop(int *ptr);
		
	private:
		int nmbItems;
		vector<int> StackVector;
};

#endif