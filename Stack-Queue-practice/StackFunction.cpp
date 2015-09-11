/*****************************************************
 * Program filename: StackFunction.cpp
 * Author: Brianna Carter
 * Date: 5/17/2015
 * Description: This creates a linked list with FILO characeristics,
 *  adds 3 values to the list, and removes them.
 * ****************************************************/


#include <cstddef>
#include <iostream>
/**************************************
* structure for the nodes
****************************************/
struct StackLike
{
	int value;
	StackLike *next;
};

/******************************************
 * Function: add
 * Description: creates the three nodes in the 
 * 	structure
 *  Input: three int values
 *  Output: none
 *  *******************************************/
StackLike* add(int num1, int num2, int num3)
{
	std::cout << "Adding: " << std::endl;
	StackLike *top;
	top = new StackLike;				//add the first node
	top->value = num1;					
	top->next = NULL;					//next pointer is NULL
	std::cout << num1 << std::endl;
	
	StackLike *two = new StackLike;
	two->value = 9;
	two->next = top;				//the next pointer is the old top node
	top = two;					//the new node is on top
	std::cout << num2 << std::endl;

	StackLike *three = new StackLike;
	three->value = 6;
	three->next = top;					//set next pointer to old top node
	top = three;						//new node is on top
	std::cout << num3 << std::endl;

	return top;
}


/********************************************
 * Function: display
 * Description: Displays the list of numbers
 *  Input: pointer to the top value 
 *  Output: none
 *  ******************************************/
void display(StackLike *top)
{
		std::cout << "List: " << std::endl;
		StackLike *ptr = top;

	while(ptr !=NULL)						//while there are nodes in the list, print value
	{	std::cout << ptr->value << std::endl; 
		ptr = ptr->next;}

}


/********************************************
 * Function: remove
 * Description: Removes the values one at at time 
 *	and displays the value
 *  Input: pointer to the top value
 *  Output: none
 *  ******************************************/
void remove(StackLike *list)
{
		StackLike *trash;
	std::cout << "Deleting: " << std::endl;
// loop through the three elements and remove nodes
	for(int x = 0; x < 3; x++)
{	std::cout << list->value << std::endl;		
	trash = list;
	list = list->next;
	delete trash;
}

}

/*************************************/

int main()
{

	StackLike *list = add(5, 9, 6);
	display(list);
	remove(list);

return 0;
}