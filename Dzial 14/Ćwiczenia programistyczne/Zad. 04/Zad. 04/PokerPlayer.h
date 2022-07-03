#pragma once
#include "Person.h"

class PokerPlayer :	public virtual Person
{
public:
	short Draw();		// Returns a number in range of 1-52 that represents card
	void Show();
	//void Set();
};

