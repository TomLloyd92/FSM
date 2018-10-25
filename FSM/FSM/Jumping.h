
#include "Animation.h"

class State;

class Jumping : public State
{
public:
	Jumping() {  };
	~Jumping() {  };
	void idle(Animation* a);
};
