
#include "State.h"
#include <iostream>

class State;

class Climbing : public State
{
public:
	Climbing() {  };
	~Climbing() {  };
	void idle(Animation* a)
	{
		std::cout << "Going from Climbing to Idling" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};