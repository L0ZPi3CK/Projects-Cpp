#pragma once
#include "Person.h"
#include <iostream>

class Gunslinger : public virtual Person
{
private:
	int notches;

public:
	double Draw();		// Returns a double-type number that represent the time taken by the gunman to draw his revolver
	void Show(); 		// Shows name and surname and notches
	void Set();
};

