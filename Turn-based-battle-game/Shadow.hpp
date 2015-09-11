#ifndef Shadow_CPP
#define Shadow_CPP
#include "Creatures.hpp"
#include <string>

class Shadow : public Creatures
{ 

public:
	Shadow():Creatures(2, 10, 1, 6, 0, 12, "Shadow"){};
	virtual double attack();
	virtual double defend(double attack);

};
#endif 