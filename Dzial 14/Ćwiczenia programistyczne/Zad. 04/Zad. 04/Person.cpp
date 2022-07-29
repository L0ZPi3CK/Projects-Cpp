#include "Person.h"

void Person::Show()
{
	std::cout << "Imie: " << name << "\nNazwisko: " << surname << std::endl;
}

void Person::Set()
{
	std::cout << "Podaj imie: ";
	std::cin >> name;
	std::cout << "Podaj nazwisko: ";
	std::cin >> surname;
}

Person::~Person() {};