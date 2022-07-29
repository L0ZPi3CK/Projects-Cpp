#include "manager.h"

void manager::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "Obiekty: " << inchargeof << std::endl;
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Podaj ilosc obiektow ktorymi zarzadza: ";
	std::cin >> inchargeof;
}