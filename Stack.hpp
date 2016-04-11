#ifndef STACK_CLASS_H
#define STACK_CLASS_H

#include <vector>
#include <iostream>
using namespace std;

class Stack
{
	public:
		Stack(int max);
		~Stack();
		void push(int element);
		int pop(void);
		int isEmpty(void);
		int top(void);

	private:
		int nmbItems;
		vector<int> StackVector;
};

#endif