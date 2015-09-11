/****************************************************************
* Program Filename: GameOfLife.cpp
* Author: Brianna Carter
* Date: 4/11/15
* Description: This program will simulate Conway's game of life.
*   It will allow the user to choose between 3 shapes and where to 
*    start the pattern and will cycle through the game for a limited 
*    number of iterations. 
* Input: Which pattern and where to place that pattern.
* Output: The visible grid with the changing pattern. 
*******************************************************************/

#include <iostream>
#include <string>
#include <iomanip>

void play(int, int);


int main()
{
    int choice = 0;
    int userRow;
    int userColumn;
    int row;
    int column;
    
 
	while(choice != 2)
	{   
   	 std::cout << std::endl;
   	 std::cout << "Welcome to Conway's Game Of Life!" << std::endl;
    	 std::cout << "Please choose an option from the menu." << std::endl;
 	 std::cout << "1. Play the game" << std::endl;
     	 std::cout << "2. Quit" << std::endl;
    	 std::cin >> choice;

    	if(choice == 1)
    	{
        	std::cout << "There are 40 rows and 20 columns, where would you";
        	std::cout << " like the pattern to start?" << std::endl;
        	std::cout << "Row: ";
        	std::cin >> userRow;

			/*
			 * Make sure the user entered a correct number
			 */ 	
			while(userRow < 1 || userRow > 40)
			{std::cout << "That is not a valid row." << std::endl;
			 std::cout << "Please enter a valid row." << std::endl;
			 std::cin >> userRow;}
	
	        std::cout << "Column: ";
       	 	std::cin >> userColumn;

			/*
			 * Make sure the user enteres a correct column number
			 */
			while(userColumn < 1 || userColumn > 20)
			{std::cout <<"That is not a valid column." << std::endl;
			 std::cout << "Please enter a valid column." << std::endl;
			 std::cin >> userColumn;}
        

		row = userRow + 5; //add 5 so the ghost rows are not initiated
		column = userColumn + 5;

       		 play(row, column);
   	 }

	}	
return 0;
}

/********************************************************
* Function: void play(int, int)
* Description: This function initializes the board and 
*  pattern to the position the user specifies. It uses a counter 
*  to look through the visible portion of the array and determine
*  if the space should be alive or dead. 
* Pre-Conditions: The user has to choose a pattern and enter a 
*   starting location.
* Post-Conditions: The game runs through 25 generations and then 
*   returns to the menu.
**********************************************************/

void play(int row, int column)
{
#include <iomanip>

int pattern;
const char ALIVE = 'O';
const char DEAD = '.';
char board[50][30];

    /*
     * Creating the board with ghost rows and columns and initializing
     * the array to DEAD.
     */
     
    for(int r = 0; r < 50; r++)
    {   for(int c = 0; c < 30; c++)
        {   board[r][c] = DEAD;}
    }

std::cout << "What pattern would you like to use?" << std::endl;
std::cout << "1. Fixed Oscillator" << std::endl;
std::cout << "2. Glider" << std::endl;
std::cout << "3. Cannon" << std::endl;
std::cin >> pattern;

	/*
 	* If the user enters a choice that is not valid, keep asking for a valid choice
 	*/
 
	while(pattern < 1 || pattern > 3)
	{
		std::cout << "That is not a valid choice." << std::endl;
		std::cout << "Please enter a valid choice." << std::endl;
		std::cin >> pattern;
	}
	if(pattern == 1)
	{
     	 /* 
      	  * This sets my initial pattern for the oscillator.
	  */
    
		board[row][column] = ALIVE;
       		board[row + 1][column] = ALIVE;
       		board[row + 2][column] = ALIVE;
        }

	else if(pattern == 2)
	{
	/*
	 * Sets initial pattern for glider.
	 */
		board[row][column] = ALIVE;
		board[row + 1][column + 1] = ALIVE;
		board[row + 2][column - 1] = ALIVE;
		board[row + 2][column] = ALIVE;
		board[row + 2][column + 1] = ALIVE;
	}

	else if(pattern == 3)
	{
	/* 
 	 * Sets initial pattern for cannon. 
 	 */
		board[row][column] = ALIVE;
		board[row][column + 1] = ALIVE;
		board[row + 1][column] = ALIVE;
		board[row + 1][column + 1] = ALIVE;
		board[row][column + 9] = ALIVE;
		board[row + 1][column+ 9] = ALIVE;
		board[row + 2][column + 9] = ALIVE;   
		board[row - 1][column + 10] = ALIVE;
		board[row + 3][column + 10] = ALIVE;
		board[row - 2][column + 11] = ALIVE;
		board[row - 2][column + 12] = ALIVE;
		board[row + 4][column + 11] = ALIVE;
		board[row + 4][column + 12] = ALIVE;
		board[row + 1][column + 13] = ALIVE;
		board[row - 1][column + 14] = ALIVE;
		board[row + 3][column + 14] = ALIVE;
		board[row][column + 15] = ALIVE;
		board[row + 1][column + 15] = ALIVE;
		board[row + 2][column + 15] = ALIVE;
		board[row + 1][column + 16] = ALIVE;
		board[row - 2][column + 19] = ALIVE;
		board[row - 1][column + 19] = ALIVE;
		board[row][column + 19] = ALIVE;
		board[row - 2][column + 20] = ALIVE;
		board[row - 1][column + 20] = ALIVE;
		board[row][column + 20] = ALIVE;
		board[row + 1][column + 21] = ALIVE;   
		board[row - 3][column + 21] = ALIVE;
		board[row + 1][column + 23] = ALIVE;
		board[row + 2][column + 23] = ALIVE;
		board[row - 3][column + 23] = ALIVE;
		board[row - 4][column + 23] = ALIVE;
		board[row - 2][column + 32] = ALIVE;
		board[row - 1][column + 32] = ALIVE;
		board[row - 2][column + 33] = ALIVE;
		board[row - 1][column + 33] = ALIVE;
 	}

	else
	{std::cout << "That is not a valid choice." << std::endl;}
	
/*  Loop through visible game array, determine if space should be born 
 *       or die, store that value in a holding array.
 */
char holding[50][30];
for(int i = 0; i < 25; i++)
    {for(int r = 0; r < 50; r++)
    { 
	 for(int c = 0; c < 30; c++)
        {int neighborCount = 0;
            if(board[r-1][c] == ALIVE)
        	{neighborCount++;}
            if(board[r][c-1] == ALIVE)
        	{neighborCount++;}
            if(board[r-1][c-1] == ALIVE)
		{neighborCount++;}
            if(board[r+1][c] == ALIVE)
		{neighborCount++;}
            if(board[r+1][c-1] == ALIVE)
            	{neighborCount++;}
            if(board[r][c+1] == ALIVE)
            	{neighborCount++;}
            if(board[r-1][c+1] == ALIVE)
            	{neighborCount++;}
            if(board[r+1][c+1] == ALIVE)
            	{neighborCount++;}
   	 

	    /*
 	    *Use neighbor state to change the position in the holding arry
 	    */
            if(board[r][c] == DEAD)
                {   if(neighborCount == 3)
                    {   holding[r][c] = ALIVE;}
                    else
                    {   holding[r][c] = DEAD;}
                }
            else
                {   if(neighborCount <= 1 || neighborCount > 3)
                    {   holding[r][c] = DEAD;}
                    else
                    {   holding[r][c] = ALIVE;}
                }
        }
      }
  
    	/* 
	 * Copy the values from the holding array to the game board
	 */
        for(int r = 0; r < 50; r++)
        {for(int c = 0; c < 30; c++)
            {   if(holding[r][c] == ALIVE)
		{board[r][c] = ALIVE;}
		else
		{board[r][c] = DEAD;}
	    }
	}
       
	for(int r = 6; r < 46; r++)
	{	for(int c = 6; c < 26; c++)     
		{std::setw(3);
		std::cout << board[r][c] << std::setw(3);}
	   std::cout << std::endl;
        }
   usleep(255000);	//pause screen so user can see oscillations
   std::cout << std::endl; }
 }


    
   
