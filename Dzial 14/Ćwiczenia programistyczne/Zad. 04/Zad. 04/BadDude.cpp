#include "BadDude.h"

double BadDude::Gdraw()
{
	return 2.33;
}

void BadDude::Show()
{
	Gunslinger::Show();
	std::cout << "Numer karty: " << Cdraw();
}