#include "abstr_emp.h"

abstr_emp::abstr_emp()
{
	fname = "None";
	lname = "None";
	job = "None";
}

abstr_emp::abstr_emp(std::string fn, std::string ln, std::string j)
{
	fname = fn;
	lname = ln;
	job = j;
}

void abstr_emp::ShowAll() const  
{
	std::cout << "Imie: " << fname << std::endl;
	std::cout << "Nazwisko: " << lname << std::endl;
	std::cout << "Zawod: " << job << std::endl;
}

void abstr_emp::SetAll()
{
	std::cout << "Podaj imie pracownika: ";
	std::cin >> fname;

	std::cout << "Podaj nazwisko pracownika: ";
	std::cin >> lname;

	std::cout << "Podaj zawod pracownika: ";
	std::cin >> job;
}

std::ostream& operator<<(std::ostream& os, const abstr_emp& e)
{
	os << "Imie: " << e.fname <<
		"\nNazwisko: " << e.lname << std::endl;

	return os;
}

abstr_emp::~abstr_emp() {};