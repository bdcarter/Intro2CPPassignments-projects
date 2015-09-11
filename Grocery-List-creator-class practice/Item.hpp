/*******************************************************
 * Author:				Brianna Carter
 * Date created:			4/26/15
 * Date modified:			4/26/15
 *
 * This file contains the class declaration for Item.
 * It contains a get and set method for string name, 
 * double price, int quantity, and double unit. It also has a default 
 * constructor and a constructor that takes 3 parameters.
 * ********************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
using namespace std;
class Item
{
//Have to make the private variables protected so the Club Item class can access them
	protected:
		string name;
		double price;
		int quantity;
		string unit;

	public:
		Item();
		Item(string, double, int, string);
		void setName(string);
		void setPrice(double);
		void setQuantity(int);
		void setUnit(string);
		string getName();
		double getPrice();
		int getQuantity();
		string getUnit();

};

class ClubItem : public Item
{
	public:
		void setPrice(double);

};

#endif
