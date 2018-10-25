
#include "Animation.h"
#include "Climbing.h"
#include "Jumping.h"
#include "State.h"

class State;

class Idle : public State
{
public:
	Idle() {  };
	~Idle() {  };
	void jumping(Animation* a);
	void climbing(Animation* a);
};
