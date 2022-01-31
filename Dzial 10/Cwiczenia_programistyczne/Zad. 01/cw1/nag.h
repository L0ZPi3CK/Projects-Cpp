#pragma once
#ifndef DEPOS_H_
#define DEPOS_H_

#include <string>

class Deposit
{
private:
	std::string nazwisko;
	int numer_rachunku;
	double saldo;

public:
	Deposit();
	Deposit(const std::string identity, int number = 1, double money = 0);		//do sprawdzenia
	~Deposit();
	void show();
	void depositm(double money);
	void withdraw(double money);
};
#endif // !DEPOS_H_
