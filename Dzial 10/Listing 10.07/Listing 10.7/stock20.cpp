#include <iostream>
#include <cstring>
#include "stock20.h"

//konstruktory
Stock::Stock()		//konstruktor domyslny
{
	company = "bez nazwy";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string& co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "Liczba udzialow nie moze byc ujemna;"
			<< "ustalam luczbe udzialow w " << company << " na 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

//dekonstruktor klasy
Stock::~Stock()
{
}

//pozostale metody

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Liczba nabywanych udzialow nie moze byc ujemna. "
			<< "transakcja przerwana.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num > 0)
	{
		cout << "Liczba sprzedawanych udzialow nie moze byc ujemna. "
			<< "Transakcja przerwana.\n";
	}
	else if (num > shares)
	{
		cout << "Nie mozesz sprzedac wiecej udzialow, niz posiadasz!"
			<< "Transakcja przerwana.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void Stock::update(double price)
{
	share_val = price;
	set_tot();
}
void Stock::show()const
{
	using std::cout;
	using std::ios_base;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	cout << "Spolka: " << company
		<< " Liczba udzialow: " << shares << '\n'
		<< " Cena udzialu: " << share_val << " zl";
	cout.precision(2);
	cout << " Laczna wartos udzialow: " << total_val << " zl" << "\n";
	
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}

const Stock& Stock::topval(const Stock& s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}