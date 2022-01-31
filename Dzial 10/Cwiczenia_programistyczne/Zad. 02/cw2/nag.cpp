#include <iostream>
#include "nag.h"

Person::Person()
{
	lname = "";
	fname[0] = '\0';
}

Person::Person(const std::string& ln, const char* fn)
{
	lname = ln;
	int i = 0;
	while (i < LIMIT)
	{
		fname[i] = fn[i];
		if (fn[i+1] == '\0')
		{
			fname[i + 1] = fn[i + 1];
			break;
		}
		i++;
	}
}

Person::~Person()
{
}

void Person::Show()const
{
	std::cout << "Witaj " << lname << " " << fname << '\n';
}

void Person::FormalShow()const
{
	std::cout << "Witaj " << fname << " " << lname << '\n';
}