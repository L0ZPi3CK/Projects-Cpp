#include <iostream>
#include <string>
#include "nag.h"

void strcount(const std::string str);

int main()
{
	std::cout << "Podaj wiesz: ";
	std::getline(std::cin, n1::line);
	while (n1::line[0] != '\0')
	{
		strcount(n1::line);
		std::cout << "Wprowadz nastepny wiersz (wiersz pusty konczy wprowadzanie):\n";
		std::getline(std::cin, n1::line);
	}	
}

void strcount(const std::string str)
{
	static int total = 0;
	int count = str.length();
	total += count;
	std::cout << count << " znakow\n";
	std::cout << "Lacznie " << total << " znakow\n";
}
