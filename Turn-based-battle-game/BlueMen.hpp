#ifndef BlueMen_CPP
#define BlueMen_CPP
#include "Creatures.hpp"
#include <string>

class BlueMen : public Creatures
{ 

public:
	BlueMen():Creatures(2, 10, 3, 6, 3, 12, "Blue Men"){};
	virtual double attack();
	virtual double defend(double attack);

};
#endif 