#include "brass.h"
using std::count;
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
		cout << "Nie mozna wyplacic ujemnej kwoty;\n"<< "Wplata anulowana.\n";
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

