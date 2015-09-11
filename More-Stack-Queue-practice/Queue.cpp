/*****************************************************
 * Program filename: Queue.cpp
 * Author: Brianna Carter
 * Date: 5/22/2015
 * Description: Dynamic queue that allows the user to 
 *	add as many numbers as they like and places them in a queue.
 *	Has functions for adding to the back, viewing the front, 
 *	removing from the front, and checking for an empty queue.
 *	Uses code found in textbook on page 1091-1092
 * ****************************************************/

#include "Queue.hpp"
#include <cstddef>
#include <iostream>

Queue::Queue()
{
	front = NULL;
	back = NULL;
}


/******************************************
 * Function: addBack
 * Description: adds value to the back of the list
 *  Input: int
 *  Output: none
 *  *******************************************/
void Queue::addBack(int num1)
{
	if(this->isEmpty())
	{
		front = new QueueNode(num1);	//add the first node
		//this is the first element so back pointer == front
		back = front;					
		std::cout << "Added to queue" << std::endl << std::endl;
	}
	else
	{
		back->next = new QueueNode(num1);	//add next nodes to the back of the queue
		back = back->next;					//set back pointer to last node
		std::cout << "Added to queue" << std::endl << std::endl;
	}

}

/********************************************
 * Function: getFront
 * Description: Displays the list of numbers
 *  Input: pointer to the top value 
 *  Output: none
 *  ******************************************/
void Queue::getFront()
{
		std::cout << "The front queue value is: ";
		if(this->isEmpty())
		{
			std::cout << "Queue is empty." << std::endl;
		}
		else
		{
			std::cout << this->front->value << std::endl;		//get the value at the front
		}

}

/********************************************
 * Function: removeFront
 * Description: Removes the value at the front 
 *	of the queue. 
 *  Input: none
 *  Output: none
 *  ******************************************/
void Queue::removeFront()
{
		QueueNode *trash;			//temporary pointer to hold value being deleted

	std::cout << "Deleting front of queue." << std::endl;
			//loop through the three nodes and delete
	if(isEmpty())
	{
		std::cout << "Queue is empty." << std::endl;
	}
	else
	{		
		trash = front;			//store the node in the trash
		front = front->next;	//set the new front node
		delete trash;			//delete the old front node
		std::cout << std::endl;
	}

}

/************************************
*Function: isEmpty
* Description: check if queue is empty, 
* 	return true or false
*Input:none
*Output:bool
****************************************/

bool Queue::isEmpty()
{								//if queue is empty, return true, if not, return false
	bool empty;
	if(front == NULL)
		empty = true;
	else
		empty = false;
	return empty;
}

