#ifndef ReptilePeople_CPP
#define ReptilePeople_CPP
#include <string>
#include "Creatures.hpp"

class ReptilePeople : public Creatures
{ 

public:
	ReptilePeople() : Creatures(3, 6, 1, 6, 7, 18, "Reptile People"){}
	virtual double attack();
	virtual double defend(double attack);

};
#endif 