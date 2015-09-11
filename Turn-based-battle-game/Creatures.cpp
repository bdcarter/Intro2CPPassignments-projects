/*****************************************************
 * Program filename: Creatures.cpp
 * Author: Brianna Carter
 * Date: 5/10/2015
 * Description: This is a battle simulator between two 
 * 	different Creatures.
 * ****************************************************/
#include "Creatures.hpp"
#include "Barbarian.hpp"
#include "ReptilePeople.hpp"
#include "BlueMen.hpp"
#include "Goblin.hpp"
#include "Shadow.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>


int main()
{

srand(time(0)); //sets seed number to time
 
 Creatures *attacker;
 Creatures *defender;
 
	int choice = 0;

	
	std::cout << "Welcome! This game is turn-based." << std::endl;
	std::cout << "The first character will attack while ";
	std::cout << "the second character defends." << std::endl;
	std::cout <<  "Then the second character attacks while the first character defends, ";
	std::cout << "and so on." << std::endl << std::endl; 

	while(choice != 6){
		std::cout << "Please choose a creature to be the first character." << std::endl;
		std::cout << "Please choose the number of the creature." << std::endl;
		std::cout << "1. Barbarian" << std::endl;
		std::cout << "2. Reptile People" << std::endl;
		std::cout << "3. Blue Men" << std::endl;
		std::cout << "4. Goblin" << std::endl;
		std::cout << "5. Shadow" << std::endl;
		std::cout << "6. Quit" << std::endl;
		std::cin >> choice; 
		
		if(choice < 1 || choice > 6)
		{std::cout << "Please choose correct number" << std::endl;
		std::cin >> choice;}

		else if(choice == 1)
			{	
				attacker = new Barbarian;

				std::cout << " Player 1" <<  std::endl;
				std::cout << "----------" << std::endl;
				std::cout << "Strength: " << attacker->getStrength() << std::endl;
				std::cout << "Armor: " << attacker->getArmor() << std::endl;
				std::cout << "Attack Dice: " << attacker->getADice() << std::endl;
				std::cout << "Attack sides: " << attacker->getASides() << std::endl;
				std::cout << std::endl << std::endl;
			}

		else if(choice == 2)
		{
				attacker = new ReptilePeople;
			
				std::cout << " Player 1" <<  std::endl;
				std::cout << "----------" << std::endl;
				std::cout << "Strength: " << attacker->getStrength() << std::endl;
				std::cout << "Armor: " << attacker->getArmor() << std::endl;
				std::cout << "Attack Dice: " << attacker->getADice() << std::endl;
				std::cout << "Attack sides: " << attacker->getASides() << std::endl;
				std::cout << std::endl << std::endl;
		}
		else if(choice == 3)
		{
				attacker = new BlueMen;
			
				std::cout << " Player 1" <<  std::endl;
				std::cout << "----------" << std::endl;
				std::cout << "Strength: " << attacker->getStrength() << std::endl;
				std::cout << "Armor: " << attacker->getArmor() << std::endl;
				std::cout << "Attack Dice: " << attacker->getADice() << std::endl;
				std::cout << "Attack sides: " << attacker->getASides() << std::endl;
				std::cout << std::endl << std::endl;}

		else if(choice == 4)
		{		attacker = new Goblin;

				std::cout << " Player 1" <<  std::endl;
				std::cout << "----------" << std::endl;
				std::cout << "Strength: " << attacker->getStrength() << std::endl;
				std::cout << "Armor: " << attacker->getArmor() << std::endl;
				std::cout << "Attack Dice: " << attacker->getADice() << std::endl;
				std::cout << "Attack sides: " << attacker->getASides() << std::endl;
				std::cout << std::endl << std::endl;}

		else if(choice == 5)
		{		attacker = new Shadow;

				std::cout << " Player 1" <<  std::endl;
				std::cout << "----------" << std::endl;
				std::cout << "Strength: " << attacker->getStrength() << std::endl;
				std::cout << "Armor: " << attacker->getArmor() << std::endl;
				std::cout << "Attack Dice: " << attacker->getADice() << std::endl;
				std::cout << "Attack sides: " << attacker->getASides() << std::endl;
				std::cout << std::endl << std::endl;}

	
		else if(choice == 6)
		{ std::cout << "Thanks for playing!" << std::endl;
		break;}		

	std::cout << "Please choose a creature to be the second character." << std::endl;
	std::cout << "Please choose the number of the option." << std::endl;
	std::cout << "1. Barbarian" << std::endl;
	std::cout << "2. Reptile People" << std::endl;
	std::cout << "3. Blue Men" << std::endl;
	std::cout << "4. Goblin" << std::endl;
	std::cout << "5. Shadow" << std::endl;
	std::cin >> choice;

		if(choice < 1 || choice > 6)
		{std::cout << "Please choose correct number" << std::endl;
		std::cin >> choice;}

		else if(choice == 1)
			{   
				defender = new Barbarian;

				std::cout << " Player 2" << std::endl;
				std::cout << "-----------" << std::endl;
				std::cout << "Strength: " << defender->getStrength() << std::endl;
				std::cout << "Armor: " << defender->getArmor() << std::endl;
				std::cout << "Defend Dice: " << defender->getDDice() << std::endl;
				std::cout << "Defend sides: " << defender->getDSides() << std::endl;
				std::cout << std::endl << std::endl;


			}
			
			else if(choice == 2)
			{				
				defender = new ReptilePeople;
			
				std::cout << " Player 2" << std::endl;
				std::cout << "-----------" << std::endl;
				std::cout << "Strength: " << defender->getStrength() << std::endl;
				std::cout << "Armor: " << defender->getArmor() << std::endl;
				std::cout << "Defend Dice: " << defender->getDDice() << std::endl;
				std::cout << "Defend sides: " << defender->getDSides() << std::endl;
				std::cout << std::endl << std::endl;


			}

			if(choice == 3)
			{
				defender = new BlueMen;
			
				std::cout << " Player 1" <<  std::endl;
				std::cout << "----------" << std::endl;
				std::cout << "Strength: " << defender->getStrength() << std::endl;
				std::cout << "Armor: " << defender->getArmor() << std::endl;
				std::cout << "Defend Dice: " << defender->getADice() << std::endl;
				std::cout << "Defend sides: " << defender->getDSides() << std::endl;
				std::cout << std::endl << std::endl;}

			if(choice == 4)
			{	defender = new Goblin;

				std::cout << " Player 2" << std::endl;
				std::cout << "-----------" << std::endl;
				std::cout << "Strength: " << defender->getStrength() << std::endl;
				std::cout << "Armor: " << defender->getArmor() << std::endl;
				std::cout << "Defend Dice: " << defender->getDDice() << std::endl;
				std::cout << "Defend sides: " << defender->getDSides() << std::endl;
				std::cout << std::endl << std::endl;}

			if(choice == 5)
			{	defender = new Shadow;

				std::cout << " Player 2" << std::endl;
				std::cout << "-----------" << std::endl;
				std::cout << "Strength: " << defender->getStrength() << std::endl;
				std::cout << "Armor: " << defender->getArmor() << std::endl;
				std::cout << "Defend Dice: " << defender->getDDice() << std::endl;
				std::cout << "Defend sides: " << defender->getDSides() << std::endl;
				std::cout << std::endl << std::endl;}

		else if(choice == 6)
		{std::cout << "Thanks for playing!" << std::endl;
			break;}
	
	std::cin.ignore();

	attacker->battle(defender);

	std::cout << "Press 6 to quit, 1 to battle again." << std::endl;
	std::cin >> choice;


}
return 0;	
}


Creatures::Creatures(){
	armor = 0;
	strength = 0; 
	aDice = 0;
	aSides = 0; 
	dDice = 0; 
	dSides = 0;
	type = " ";
	achilles = false;
	achillesActive = false;
	
}

Creatures::Creatures(int aDice0, int aSides0, int dDice0, int dSides0, int armor0, int strength0, std::string type0)
{
	aDice = aDice0;
	aSides = aSides0;
	dDice = dDice0;
	dSides = dSides0;
	armor = armor0;
	strength = strength0;
	type = type0;
	achilles = false;
	achillesActive = false;
}
/******************************************************************
******************************************************************/
void Creatures::battle(Creatures *player2)
{	
	int count = 2;
	
	do
	{//while either creature is alive, attack and defend. 
		bool achillesFlag = this->isAchilles(player2);
		this->setAchilles(achillesFlag);
		player2->setAchilles(achillesFlag);
		std::cout << std::endl << std::endl << std::endl;
		char ch;
		std::cout << "Press enter to battle!";//give the user time to view stats
		std::cin.get(ch);
		std::cout << std::endl;
		if(count % 2 == 0)
		{
		double attack0 = this->attack();
		if(this->getAchillesActive()==true)
			{player2->setAchillesActive(true);}

		double hit0 = player2->defend(attack0);
		player2->takeDamage(hit0);
		
		}
	
		else
		{
			double attack0 = player2->attack();
			if(player2->getAchillesActive() == true)
				{this->setAchillesActive(true);}
			double hit0 = this->defend(attack0);
			this->takeDamage(hit0);
			
		}

	count++;
	}while(!this->isDefeated() && !player2->isDefeated());	

	if(this->getStrength()<=0){
		std::cout << this->getType() << " has been defeated." << std::endl << std::endl;}

	else if(player2->getStrength() <= 0){
		std::cout << player2->getType() << " has been defeated." << std::endl << std::endl;}

}


/****************************************************
 * Function: Take damage
 * Description: subtracts total hit from creature's
 *  strength and stores the new strength
 *  Input: hit strength
 *  Output: None (stores new strength)
 *  **********************************************/
void Creatures::takeDamage(double hit)
{
	if(hit > 0)
		{int strength = this->getStrength();
	std::cout << std::endl << this->getType() << "'s total damage taken: " << hit << std::endl;
	
			strength = strength - hit;
			if(strength > 0){
			std::cout << this-> getType() << "'s total strength is now: " << strength << std::endl;
			this->setStrength(strength);}

			else{
				std::cout << this->getType() << "'s total strength is now 0!" << std::endl;
				this->setStrength(strength);
			}

		}
	else
	{std::cout << std::endl<< "No damage taken!" << std::endl;
	std::cout << this->getType() << "'s strength is still: " << strength << std::endl;}
}
/********************************************
 * Function: is Defeated
 * Description: Tests total strength to see
 *  if creature has perished.
 *  Input: none
 *  Output: bool value
 *  ******************************************/
bool Creatures::isDefeated()
{
	bool defeat;
	int remainStrength = this->getStrength();

	if(remainStrength <= 0)
		{defeat = true;}
	else
		{defeat = false;}

	return defeat;
}

/**********************************************************
* Function: is Achilles
* Description: Tests if the achilles skill can be used by 
* the goblin in combat. If the attacker is a goblin and the 
* defender is also a goblin, this will be false. 
* Input: pointers to the attacker and the defender.
* Output: bool value.
************************************************************/
bool Creatures::isAchilles(Creatures *defender)
{
	
	std::string a, d;
	std::string g = "Goblin";
	bool possible;
	a = this->getType();
	d = defender->getType();

	if(a == g && d != g)
	{possible = true;}

	else if(a != g && d == g)
		{possible = true;}

	else
		{possible = false;}
	
	return possible;

}


