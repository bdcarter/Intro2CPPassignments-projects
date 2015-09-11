/***********************************************
 * Author:			Brianna Carter
 * Date Created:		4/26/15
 * Date modified:		2/126/15
 *
 * This file contains the declarations for 
 * the class List. The methods are 
 * addItem, listContents, and totalPrice. 
 * The main function displays a menu
 * that allows the user to add an item, 
 * list cart contents, and calculate the 
 * total cost of the cart. 
 * *****************************************/
#include <vector> 
#include <string>
#include "Item.hpp"
#include "List.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

/*************************************************
 *add item function: adds the item to the vector
 ************************************************/
void List::addItem(Item product)
{
	
	contents.push_back(product);

}

/***************************************************
 * list contents function lists the name, price, and 
 * quantity for all items in the vector.
 * *************************************************/

void  List::listContents()
{
	double count;

//Loop through the vector and print the information for the items	
	for(count = 0; count < contents.size(); count++)
	{
	cout << fixed << setprecision(2) << endl;
	cout << "Name: " << contents[count].getName() << endl;
	cout << "Individual Price: " << contents[count].getPrice() << endl;
	cout << "Quantity: " << contents[count].getQuantity() << endl;
	cout << "Unit: " << contents[count].getUnit() << endl;
	cout << "Subtotal for item: ";
	cout << contents[count].getPrice() * contents[count].getQuantity() << endl;
	}
	double total;
	double x;

//Loop through the vector a second time and accumulate the total price
	for(x=0; x < contents.size(); x++)
	 {total += (contents[x].getPrice() * contents[x].getQuantity());}
	cout << "-------------------------------" << endl;
	cout << "Total for this trip: " << total << endl << endl;
}

/***********************************************
 * remove Item: removes the last item from the 
 * lsit.
 * ********************************************/
	
void List::removeItem()
{
	contents.pop_back();

}


/******************
 * main
 * ***************/

int main()
{
ClubItem clubProduct;
Item product;
int choice;
string nameIn;
double priceIn;
int quantityIn;
string unitIn;
List cart;
int club;


//While the user wants to add items, loop through the menu
do{

	cout << "Please choose an action: " << endl;
	cout << "1. Add item" << endl;
	cout << "2. List contents" << endl;
	cout << "3. Remove Item" << endl;
	cout << "4. Quit" << endl;
	cin >> choice;

	if(choice == 1)
	{
		cout << "Is this item a Club item?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cin >> club;

		cout << "What is the name of the item?" << endl;
		cin.ignore();
		getline(cin,nameIn);

		cout << "What is the price of the item?" << endl;
		cin >> priceIn;
				
		cout << "What quantity would you like to add??" << endl;
		cin >> quantityIn;	

		cout << "What are the units?(cups, oz, lbs, g, etc.)" << endl;
		cin >> unitIn;
 
//If item is a club item, create a club item, if not create a regular item
 		if(club == 2)
 		{
			product.setName(nameIn);
			product.setPrice(priceIn);
			product.setQuantity(quantityIn);
			product.setUnit(unitIn);
			cart.addItem(product);
		}

		if(club == 1)
		{
			clubProduct.setName(nameIn);
			clubProduct.setPrice(priceIn);
			clubProduct.setQuantity(quantityIn);
			clubProduct.setUnit(unitIn);
			cart.addItem(clubProduct);
		}


	}
	 
	if(choice == 2)
	{ cart.listContents();}

	if(choice == 3)
	{ cart.removeItem();
	cout << "Item removed."  << endl;}


}while(choice != 4);



return 0;
}
