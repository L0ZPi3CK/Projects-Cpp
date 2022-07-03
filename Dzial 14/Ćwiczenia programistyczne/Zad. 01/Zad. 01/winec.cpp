#include "winec.h"
#include <iostream>

Wine::Wine()
{
	name = "none";
	vintage_count = 0;
}


Wine::Wine(const char* l, int y)
{
	name = l;
	vintage_count = y;
	storage.first.resize(y);
	storage.second.resize(y);
}

Wine::Wine(const char* l, int y, const int yr[], const int bot[])
{
	name = l;
	vintage_count = y;
	storage.first.resize(y);
	storage.second.resize(y);

	for (int i = 0; i < vintage_count; i++)
	{
		storage.first[i] = yr[i];
		storage.second[i] = bot[i];
	}
}

void Wine::GetBottles()
{
	for (int i = 0; i < vintage_count; i++)
	{
		int temp = 0;
		
		std::cout << "Podaj rocznik: ";
		std::cin >> temp;
		storage.first[i] = temp;

		std::cout << "Podaj liczbe butelek: ";
		std::cin >> temp;
		storage.second[i] = temp;
	}
}

void Wine::Show()
{
	std::cout << "Wino: " << name << std::endl;
	std::cout << "\tRocznik\t\tButelki\n";
	for (int i = 0; i < vintage_count; i++)
	{
		std::cout << "\t" << storage.first[i] << "\t\t" << storage.second[i] << std::endl;
	}
}

int Wine::Sum()
{
	return storage.second.sum();
}