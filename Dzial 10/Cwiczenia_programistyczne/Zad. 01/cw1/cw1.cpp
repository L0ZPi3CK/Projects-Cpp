#include <iostream>
#include "nag.h"

int main()
{
	std::string nazwisko;
	std::cout << "Proces tworzenia konta!\n";
	std::cout << "Prosze podac nazwisko: ";
	std::cin >> nazwisko;

	Deposit Deposit1(nazwisko);
	Deposit1.show();

	Deposit1.depositm(200.0);
	Deposit1.show();
	Deposit1.withdraw(55.5);
	Deposit1.show();

}