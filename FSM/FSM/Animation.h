#ifndef ANIMATION_H
#define ANIMATION_H

class jumping;
class idle;
class state;

class Animation
{
	class State* current;
public:
	Animation();
	void setCurrent(State* s)
	{
		current = s;
	}
	void idle();
	void jumping();
	void climbing();
};

#include "Idle.h"
#include "State.h"
#endif