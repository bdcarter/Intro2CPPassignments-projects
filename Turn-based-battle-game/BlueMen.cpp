#include "Creatures.hpp"
#include "BlueMen.hpp"
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
double BlueMen::attack()
{ 
		

	int attack=0;

//        srand(time(0)); //sets seed number to time

        for(int x =0; x < this->getADice(); x++)
        {
        attack += ((rand()%(this->getASides()))+1); //subtracts the max and min for range
        
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
double BlueMen::defend(double attack)
{
		

	int defend=0;
	double hit;

//        srand(time(0)); //sets seed number to time

        for(int x =0; x < this->getDDice(); x++)
        {
        defend += ((rand()%(this->getDSides()))+1); //subtracts the max and min for range        
	}

	int armor = this->getArmor();
	std::cout << "The defense from " << this->getType() << " is " << armor+defend << std::endl;
	hit = (attack - defend)-armor;
	return hit;
}