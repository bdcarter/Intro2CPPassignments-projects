/*****************************************************
 * Program filename: Stack.cpp
 * Author: Brianna Carter
 * Date: 5/22/2015
 * Description: Dynamic stack code that allows a user to 
 *	enter as many numbers as they like. Has functions 
 *	to push, pop, and peek values on the top of the stack.
 *	Uses code found in textbook on page 1078-1079
 * ****************************************************/

#include "Stack.hpp"
#include <cstddef>
#include <iostream>


/******************************************
 * Function: push
 * Description: Adds value to stack top of stack
 *  Input: int value
 *  Output: none
 *  *******************************************/
void Stack::push(int numIn)
{
	top = new StackNode(numIn, top);			//add new node on top
	std::cout << "Added to stack" << std::endl;

}

/********************************************
 * Function: peek
 * Description: Displays the top number
 *  Input: none
 *  Output: value at the top
 *  ******************************************/
void Stack::peek()
{
		std::cout << "The top stack value is: ";		//look at the value on top
		std::cout << this->top->value << std::endl;
}


/********************************************
 * Function: pop
 * Description: Removes the top value 
 *	and displays the value
 *  Input: none
 *  Output: none
 *  ******************************************/
void Stack::pop()
{
		StackNode *trash;
	std::cout << "Deleting front of stack." << std::endl;

	if(this->isEmpty())
	{	
		std::cout << "The stack is empty." << std::endl;
		std::cout << std::endl;
	}
	else
	{
		trash = top;			//store the node to be deleted
		top = top->next;		//set the new top node
		delete trash;			//delete the old top
		std::cout << std::endl;
	}
}

/***********************************************
* Function: isEmpty
* Description: checks if the stack is empty,
*	and returns true or false
* Input: none
* Output: bool value
*************************************************/
bool Stack::isEmpty()
{
	bool empty;

	if(!top)				//test if the stack is empty
		empty = true;		//return true if empty, false if not
	else
		empty = false;
	return empty;
}

