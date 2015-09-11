/********************************************************
 * Filename: Creatures.hpp
 * Author: Brianna Carter
 * Date: 5/10/2015
 * Description: The declaration file for the creature class
 *  with 5 subclasses of Creatures
 *  ************************************************/



#ifndef Creatures_CPP
#define Creatures_CPP
#include <string>

class Creatures
{
private:
	bool achilles;
	bool achillesActive;
protected:
		std::string type;
		int armor;
		int strength;
		int aDice;
		int aSides;
		int dDice;
		int dSides;
		void setAchilles(bool flag){achilles = flag;}
		void setAchillesActive(bool flag){achillesActive = flag;}


public:
		Creatures();
		Creatures(int aDice0, int aSides0, int dDice0, int dSides0, int armor0, int strength0, std::string type0);
		virtual double attack()=0;
		virtual double defend(double attack)=0; 
		void takeDamage(double hit);
		bool isDefeated();
		void setStrength(int strength0){strength = strength0;}
		int getArmor(){	return armor;}
		int getStrength(){	return strength;}
		int getDSides(){return dSides;}
		int getDDice(){return dDice;}
		int getADice(){return aDice;}
		int getASides(){return aSides;}
		std::string getType(){return type;}
		void battle(Creatures *);
		bool isAchilles(Creatures *);
		bool getAchilles(){return achilles;}
		bool getAchillesActive(){return achillesActive;}

};
#endif








