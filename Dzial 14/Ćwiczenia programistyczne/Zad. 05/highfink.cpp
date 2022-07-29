#include "highfink.h"

void highfink::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "Obiekty: " << inChargeOf() << std::endl;
	std::cout << "Raport do: " << reportsTo() << std::endl;
}

void highfink::SetAll()
{
	abstr_emp::SetAll();
	
	std::cout << "Podaj ilosc obiektow ktorymi zarzadza: ";
	std::cin >> inChargeOf();

	std::cout << "Podaj do kogo raport: ";
	std::cin >> reportsTo();
}