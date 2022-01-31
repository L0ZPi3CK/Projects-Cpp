#include <iostream>
#include "nag.h"

Deposit::Deposit()
{
	nazwisko = "none";
	numer_rachunku = 0;
	saldo = 0.0;
}

Deposit::Deposit(const std::string identity, int number, double money)
{
	nazwisko = identity;
	numer_rachunku = number;
	saldo = money;
}

Deposit::~Deposit()
{
}

void Deposit::show()
{
	std::cout << "Pan/i " << nazwisko << " o numerze '" << numer_rachunku << "' posiada: " << saldo << " zl.\n";
}

void Deposit::depositm(double money)
{
	std::cout << "Wplacam: " << money << '\n';
	saldo += money;
}

void Deposit::withdraw(double money)
{
	if (saldo == 0)
		std::cout << "Nie ma Pan/i srodkow na koncie!\n";
	else if ((saldo - money) < 0)
		std::cout << "Na koncie nie ma dostatecznej ilosci srodkow do wyplaty!\n";
	else
	{
		std::cout << "Wyplacam: " << money << '\n';
		saldo -= money;
	}
}