/*************************************************
 * Author:			Brianna Carter
 * Date Created:		4/26/15
 * Date modified:		4/26/15
 *
 * This file contains the declaration for the class
 * List for a grocery list. This class contains a vector of 
 * the Item class. It includes an addItem method
 * that takes an Item and adds it to the vector.
 * There is a method that lists all information for
 * items in the cart and a function that lists the 
 * total price for all items. 
 * ************************************************/

#ifndef LIST_HPP
#define LIST_HPP

#include "Item.hpp"
#include <string>
#include <vector>

using namespace std;

class List
{
	private:
		vector<Item> contents;
			
	public:
		void addItem(Item);
		void listContents();
		void removeItem();
};

#endif
