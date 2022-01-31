#include "nag.h"
#include <iostream>

Plorg::Plorg(const char* name, int food)
{
	for (int i = 0; i < 19; i++)
	{
		imie[i] = name[i];
		if (imie[i] == '\0')
			break;
	}
	food_ = food;
}

void Plorg::szamanko(int zarcie)
{
	int tempfood = 0;
	if ((food_ + zarcie) <= 100)
	{
		std::cout << "Hey dzieki za " << zarcie << " szamanka!\n";
		food_ += zarcie;
		std::cout << "Mniam!" << std::endl;
	}
	else
	{
		std::cout << "Hey dzieki za " << zarcie << " szamanka!\n";
		tempfood = food_ + zarcie;
		food_ = 100;
		std::cout << "Zwracam nadmiar szamanka: " << tempfood - 100 << std::endl;
	}
}

void Plorg::say()
{
	std::cout << "Mam na imie " << imie << " i jestem najedzony w " << food_ << " %\n";
}