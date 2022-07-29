#include "fink.h"

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "Raport do: " << reportsto << std::endl;
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Podaj do kogo raport: ";
	std::cin >> reportsto;
}