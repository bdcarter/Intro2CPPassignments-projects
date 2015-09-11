#ifndef Goblin_CPP
#define Goblin_CPP
#include "Creatures.hpp"
#include <string>

class Goblin : public Creatures
{ 

public:
	Goblin():Creatures(2, 6, 1, 6, 3, 8, "Goblin"){};
	virtual double attack();
	virtual double defend(double attack);

};
#endif 