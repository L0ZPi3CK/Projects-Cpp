#include "Gunslinger.h"

void Gunslinger::Show()
{
	Person::Show();
	std::cout << "Naciecia: " << notches << std::endl;
}

void Gunslinger::Set()
{
	Person::Set();
	std::cout << "Podaj liczbe naciec: ";
	std::cin >> notches;
}

double Gunslinger::Draw()
{
	return 2.33;
}