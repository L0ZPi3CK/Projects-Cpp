#include <iostream>
#include "brass.h"
using std::cout;
using std::endl;
using std::string;

//oprzyrzadowanie do formatowania napisow
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

// metody klasy Brass
Brass::Brass(const std::string& s, long an, double bal)
{
	fullName = s;
	acctNum = an;
	balance = bal;
}

void Brass::Deposit(double amt)
{
	if (amt < 0)
		cout << "Nie mo¿na wplacic ujemnej kwoty;\n" << "Wplata anulowana.\n";
	else
		balance += amt;
}

void Brass::Withdraw(double amt)
{
	// ustawienie formatu na ###.##
	format initialState = setFormat();
	precis prec = cout.precision(2);
	if (amt < 0)
	{
		cout << "Nie mozna wyplacic ujemnej kwoty;\n" << "Wplata anulowana.\n";
	}
	else if (amt <= balance)
		balance -= amt;
	else
		cout << "Zadana suma " << amt << " zl przekracza dostepne srodki.\n"
		<< "Wyplata anulowana.\n";
	restore(initialState, prec);
}

double Brass::Balance() const
{
	return balance;
}

void Brass::ViewAcct() const
{
	//ustawia format ###.##
	format initialState = setFormat();
	precis prec = cout.precision(2);
	cout << "Klient: " << fullName << endl;
	cout << "Numer rachunku: " << acctNum << endl;
	cout << "Stan konta: " << balance << " zl" << endl;
	restore(initialState, prec); // przywraca poczatkowy format
}

// metody klasy BrassPlus
BrassPlus::BrassPlus(const std::string& s, long an, double bal, double ml, double r) : Brass(s, an, bal)
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

BrassPlus::BrassPlus(const Brass& ba, double ml, double r) : Brass(ba)	// uzywa niejawnego konstruktora kopiujacego
{
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

// nowa definicja metody VievAcct()
void BrassPlus::ViewAcct() const
{
	// ustawia format ###.##
	format initialState = setFormat();
	precis prec = cout.precision(2);

	Brass::ViewAcct(); // wyswietla czesc z klasy bazowej
	cout << "Limit debetu: " << maxLoan << "zl" << endl;
	cout << "Kwota zadluzenia: " << owesBank << "zl" << endl;
	cout.precision(3); //ustawia format na ###.##
	cout << "Stopa opocentowania: " << 100 * rate << "%\n";
	restore(initialState, prec);
}

// nowa definicja metody Withdraw()
void BrassPlus::Withdraw(double amt)
{
	// ustawia format ###.##
	format initialState = setFormat();
	precis prec = cout.precision(2);

	double bal = Balance();
	if (amt <= bal)
		Brass::Withdraw(amt);
	else if (amt <= +maxLoan - owesBank)
	{
		double advance = amt - bal;
		owesBank += advance * (1.0 + rate);
		cout << "Zadluzenie faktyczne: " << advance << "zl" << endl;
		cout << "Odsetki: " << advance * rate << "zl" << endl;
		Deposit(advance);
		Brass::Withdraw(amt);
	}
	else
		cout << "Przekroczony limit debetu. Operacja anulowana.\n";
	restore(initialState, prec);
}

format setFormat()
{
	// ustawia format ###.##
	return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p)
{
	cout.setf(f, std::ios_base::floatfield);
	cout.precision(p);
}