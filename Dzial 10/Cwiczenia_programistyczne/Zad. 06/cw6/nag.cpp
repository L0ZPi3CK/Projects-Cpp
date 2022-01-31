#include "nag.h"
#include <iostream>

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove()const
{
	std::cout << "Zmienna x = " << x << '\n';
	std::cout << "Zmienna y = " << y << '\n';
}

Move Move::add(const Move& m)const
{
	Move temp = Move();
	temp.x = this->x + m.x;
	temp.y = this->y + m.y;
	return temp;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}