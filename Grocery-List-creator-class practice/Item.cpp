/**********************************************************
 * Author:			Brianna Carter
 * Date created:		2/17/15
 * Date modified:		2/17/15
 *
 * This is the definition methods for the class Item.
 * It includes Item(), Item(string, double, int),
 * void setName(string), void setPrice(double),
 * void setQuantity(int), void getUnit(double),
 * string getName(), double getPrice(), int getQuantity()
 * and double getUnit().
 * **************************************************/

#include "Item.hpp"
#include <string>
#include <iostream>
using namespace std;
/***************************
 * Default constructor
 * ************************/

Item::Item()
{
	string name = "";
	double price = 0.0;
	int quantity = 0;
	string unit = " ";
}

/*****************************
 * Constructor
 * *************************/

Item::Item(string nameIn, double priceIn, int quantityIn, string unitIn)
{

	setName(nameIn);
	setPrice(priceIn);
	setQuantity(quantityIn);
	setUnit(unitIn);
}


/**********************************
 * setName
 * *******************************/

void Item::setName(string nameIn)
{
	name = nameIn;

}

/*****************
 * setPrice
 * *************/

void Item::setPrice(double priceIn)
{
	price = priceIn;

}

/***************
 * setQuantity
 * ***********/

void Item::setQuantity(int quantityIn)
{
	quantity = quantityIn;

}

/********************
* setUnit
********************/
void Item::setUnit(string unitIn)
{
	unit = unitIn;
}

/********************
 * getName
 * ***************/

string Item::getName()
{
	return name;

}

/*************
 * getPrice
 * **********/

double Item::getPrice()
{
	return price;

}

/***************
 * getQuantity
 * *************/

int Item::getQuantity()
{
	return quantity;

}

/******************
* getUnit
******************/
string Item::getUnit()
{
	return unit;
}

/****************
set club price
**************/
void ClubItem::setPrice(double priceIn)
{
	price = (priceIn - (priceIn * .1));
}

