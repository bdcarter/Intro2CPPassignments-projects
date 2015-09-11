#include "Creatures.hpp"
#include "Shadow.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>

/**************************************
 * Function: Attack
 * Description: rolls the number of x sided
 * dice for that creature and gets the strength
 * of the attack.
 * *************************************/
double Shadow::attack()
{ 
		

	int attack=0;

        for(int x =0; x < this->getADice(); x++)
        {
        attack += ((rand()%(this->getASides()))+1); 
        
        }
        if(this->getAchillesActive()==true)
        	{attack = attack/2;}
	std::cout << "The attack from " << this->getType() << " is "<< attack << std::endl;
	return attack;
}
/*********************************************************
 * Function: Defend
 * Description: rolls the number of x sided dice to get 
 * the defense strength, subtracts it from the attack strength,
 * subtracts the armor strength from the attack strength to get
 *  the total hit srength.
 *  input: number of dice, number of sides, attack strength
 *  output: total hit strength
 *  ***************************************************/
double Shadow::defend(double attack)
{
		
	
	int defend=0;
	double hit;

		int chance = ((rand()%(2)+1));
			if(chance == 1)
				{std::cout << "Shadow's special ability is activated!";
				std::cout << " No damage is taken." << std::endl;
				hit = 0;}

			else{
       		 for(int x =0; x < this->getDDice(); x++)
				{
       		 	defend += ((rand()%(this->getDSides()))+1);         
				}
			
				int armor = this->getArmor();
				std::cout << "The defense from " << this->getType() << " is " << armor+defend << std::endl;
				hit = (attack - defend)-armor;}
				
	return hit;
}