/*************************************************************
 * Program Filename: searchSort.cpp
 * Author: Brianna Carter
 * Date: 5/9/15
 * Description: Gives the user a choice to search for a number or sort 
 * files using linear search, bubble sort, or binary sort. 
 * Input: choice from the menu, output file name for sorted numbers, 
 * which number to find, which file to sort.
 * Ouput: Sorted list to output file, position of desired number.
 * **************************************************************/



#include <iostream>
#include <fstream>
#include <string>

int main(){

//function prototypes
int linearSearch(const int values[], int SIZE, int searchValue);
int sort(int SIZE);
int binarySearch(const int values[], int SIZE, int value);

int searchValue, choice;
std::ifstream search;
const int SIZE = 20; 
int values[SIZE];
int count = 0;
int position; 

//give user opportunity to do multiple actions without having to restart program
while(choice !=4){

	std::cout << "What would you like to do?" << std::endl;
	std::cout << "Please enter the number of your choice." << std::endl;
	std::cout << "1. Search for a value." << std::endl;
	std::cout << "2. Sort the values." << std::endl;
	std::cout << "3. Sarch for a value using binary search." << std::endl;
	std::cout << "4. Quit" << std::endl;
	std::cin >> choice; 

//if user wants to search for a value
	if(choice == 1 || choice == 3)
	{	
		std::cout << "What value (1-9) would you like to find?" << std::endl;
		std::cin >> searchValue;

//open the flie to search 
		if(choice == 1){
		search.open("values.txt");}
	

		if(choice == 3){
		search.open("sorted.txt");}
//if there is an error opening the file
		if(!search)
			{ std::cout << "Error opening file." << std::endl;}
//add values to an array
		else{
			while((count < SIZE) && (search >> values[count]))
				{count++;}
		}
//call linearSearch for chice 1
		if(choice == 1){
		position = linearSearch(values, SIZE, searchValue);
		}
//call binarySearch for chioce 3
		if(choice == 3){
		position = binarySearch(values, SIZE, searchValue);
		}
//if the function finds the number, display the position, if not say it isn't there
		if(position != -1){
			std::cout << searchValue << " is found at position ";
			std::cout  << position << "."<< std:: endl;}

		else
			{std::cout << searchValue;
			std::cout << " was not found in this list." << std::endl;}


		search.close();
	}
//call the sort function if choice is 2
	if(choice == 2)
	{
		sort(SIZE);
	}

}
return 0;
}


/*******************************************************************
 * Function: linearSearch
 * Description: The function will loop through an array from the 
 * beginning and find the number the user specified.
 * Parameters: Array, array size, user's number
 * Pre-Conditions: The numbers need to be read from a file and placed 
 * in an array, the user has to choose a number to find. 
 * Post-conditions: The loop will reach the number and return it 
 * or it will reach the end of the array and return -1
 * ***************************************************************/
int linearSearch(const int values[], int SIZE, int searchValue)
{

	int index = 0;
	int position = -1;
	bool found = false; 

	while(index < SIZE && !found)
	{ if (values[index] == searchValue)
		{ found = true;
		position = index;
		}
	index++;
	}
	return position;
}


/******************************************************************************
 * Function: Sort
 * Description: The function will ask the user to choose which file to sort
 * then will write the sorted file to a file with their chosen name.
 * Parameters: size of the array
 * Pre-Conditions: The user must select choice 2 from the menu.
 * Post-conditions: The sorted numbers will be written to a file in the proper
 * sorted order. 
 * ************************************************************************/
void sort(int SIZE)
{
	std::string outFileName;
	int values[SIZE];
	int fileChoice, count;
	std::ifstream search;
	std::ofstream outFile;
		std::cout << "What file would you like to sort?" << std::endl;
		std::cout << "1. Beginning" << std::endl;
		std::cout << "2. Middle" << std::endl;
		std::cout << "3. End" << std::endl;
		std::cin >> fileChoice;
	
		std::cout << "What file would you like to write to?" << std::endl;
		std::cin >> outFileName;

		if(fileChoice == 1)
		{
			search.open("beginning.txt");
			if(!search)
			{std::cout << "Error opening file." << std::endl;}
			
			else{
				while((count < SIZE) && (search >> values[count]))
					{count++;}
			}
		}
	
		if(fileChoice == 2)	
		{	search.open("middle.txt");
			if(!search)
			{std::cout << "Error opening file." << std::endl;}
			
			else{
				while((count < SIZE) && (search >> values[count]))
					{count++;}
			}

		}
		if(fileChoice == 3)	
		{	search.open("end.txt");
			if(!search)
			{std::cout << "Error opening file." << std::endl;}
			
			else{
				while((count < SIZE) && (search >> values[count]))
					{count++;}
			}
		}

		search.close();
	int temp;
	bool swap;

		do
		{	swap = false;
			for(int x = 0; x < (SIZE - 1); x++)
			{
				if(values[x] > values[x+1])
				{
					temp = values[x];
					values[x] = values[x+1];
					values[x+1] = temp;
					swap = true;
				}
			}
		} while(swap);

	outFile.open(outFileName.c_str());
	if(!outFile)
	{ std::cout << "Error opening output file." << std::endl;}

	else{

		for(int x = 0; x < (SIZE - 1); x++)
		{outFile << values[x];
		outFile << " ";}
	
	outFile.close();
	}
}
/*********************************************************************
 * Function: binarySearch
 * Description: takes an array of sorted numbers and uses a binary 
 * search method to find value between 0-9 that the user is looking for.
 * Parameters: the array of integers, size of the array, the user's value.
 * Pre-Conditions: A file needs to be read and those values need to be 
 * placed in an array in order.
 * Post-Conditions: The function will reach the end of the array and 
 * return -1 or will find the number and return the position.
 * *****************************************************************/

int binarySearch(const int values[], int SIZE, int value)
{
	int	position = -1,
		first = 0,
		last = SIZE -1,
		middle;
	bool found = false;

	while(!found && first <= last)
	{
		middle = (first + last)/2;

		if(values[middle] == value)
		{
			found = true;
			position = middle;
		}

		else if(values[middle] > value)
		{
			last = middle-1;
		}

		else
		{
			first = middle + 1;
		}
	}
	return position;
}
