#ifndef Barbarian_CPP
#define Barbarian_CPP
#include "Creatures.hpp"
#include <string>

class Barbarian : public Creatures
{ 

public:
	Barbarian():Creatures(2, 6, 2, 6, 0, 12, "Barbarian"){};
	virtual double attack();
	virtual double defend(double attack);

};
#endif 


