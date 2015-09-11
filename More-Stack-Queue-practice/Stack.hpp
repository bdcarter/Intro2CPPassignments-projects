#ifndef STACK_CPP
#define STACK_CPP
#include <cstddef>
#include <iostream>

class Stack
{
private:
	class StackNode
	{
		friend class Stack;
		int value;
		StackNode *next;
		StackNode(int valueIn, StackNode *next1 = NULL)
		{	value = valueIn;
			next = next1;}
	};

	StackNode *top;

public:
		Stack(){ top = NULL;}
		void push(int valueIn);
		void peek();
		void pop();
		bool isEmpty();
};
#endif