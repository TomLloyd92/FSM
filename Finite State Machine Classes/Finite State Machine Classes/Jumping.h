#pragma once

class Jumping : public State
{
public:
	Jumping() {  };
	~Jumping() {  };
	void idle(Animation* a);
};
