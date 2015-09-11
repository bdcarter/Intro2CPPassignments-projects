/*****************************************************
 * Program filename: QueueFunction.cpp
 * Author: Brianna Carter
 * Date: 5/17/2015
 * Description: This creates a double linked list with FIFO characeristics,
 *  adds 3 values to the list, and removes them.
 * ****************************************************/


#include <cstddef>
#include <iostream>
/**************************************
* structure for the nodes
****************************************/
struct QueueLike
{
	int value;
	QueueLike *next;
	
};

/******************************************
 * Function: add
 * Description: creates the three nodes in the 
 * 	structure
 *  Input: three int values
 *  Output: none
 *  *******************************************/
QueueLike* add(int num1, int num2, int num3)
{
	std::cout << "Adding: " << std::endl;
	QueueLike *top;			//points to the first node in the list
	QueueLike *bottom;		//points to the last node in the list

	top = new QueueLike;		//create the first node
	bottom = top;				//point the bottom node to the only element
	top->value = num1;			//set the value
	top->next = NULL;			//the next pointer is NULL
	std::cout << num1 << std::endl;
	
	QueueLike *two = new QueueLike;		//add the second element
	two->value = num2;				
	two->next = NULL;
	top->next = two;					//the first 'next' pointer is now two
	bottom = two;						//this is now the bottom of the queue
	std::cout << num2 << std::endl;

	QueueLike *three = new QueueLike;	//add the third element
	three->value = num3;				
	three->next = NULL;
	two->next = three;					//second 'next' pointer is now three
	bottom = three;						//this is now the bottom of the queue
	std::cout << num3 << std::endl;

	return top;
}


/********************************************
 * Function: display
 * Description: Displays the list of numbers
 *  Input: pointer to the top value 
 *  Output: none
 *  ******************************************/
void display(QueueLike *top)
{
		std::cout << "List: " << std::endl;
		QueueLike *ptr = top;

	while(ptr !=NULL)
	{	std::cout << ptr->value << std::endl; 	//as long as there is an element, display them
		ptr = ptr->next;}			//move pointer to next element

}


/********************************************
 * Function: remove
 * Description: Removes the values one at at time 
 *	and displays the value
 *  Input: pointer to the top value
 *  Output: none
 *  ******************************************/
void remove(QueueLike *list)
{
		QueueLike *trash;			//temporary pointer to hold value being deleted

	std::cout << "Deleting: " << std::endl;
	for(int x = 0; x < 3; x++)			//loop through the three nodes and delete
{	std::cout << list->value << std::endl;		
	trash = list;
	list = list->next;
	delete trash;
}

}

/*************************************/

int main()
{

	QueueLike *list = add(32, 14, 2);
	display(list);
	remove(list);

return 0;
}