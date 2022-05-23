#include "worker0.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Metody klasy Worker

void Worker::Set()
{
	cout << "Podaj imie i nazwisko pracownika: ";
	getline(cin, fullname);
	cout << "Podaj numer identyfikacyjny pracownika: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}

void Worker::Show() const
{
	cout << "Imie i nazwisko: " << fullname << endl;
	cout << "Numer identyfikacyjny: " << id << endl;
}

// Metody klasy Waiter

void Waiter::Set()
{
	Worker::Set();
	cout << "Podaj poziom elegancji kelnera: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}

void Waiter::Show() const
{
	cout << "Katergoria: Kelner\n";
	Worker::Show();
	cout << "Elegancja: " << panache << "\n";
}

// Metody klasy Singer

void Singer::Set()
{
	Worker::Set();
	cout << "Podaj numer skali g³osu piosenkarza:\n";
	int i;
	for (i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << "  ";
		if (i % 4 == 3)
			cout << endl;
	}
	if (i % 4 != 0)
		cout << endl;
	while (cin >> voice && (voice < 0 || voice >= Vtypes))
		cout << "Podaj wartosc nieujemna i mniejsza od " << Vtypes << endl;
	while (cin.get() != '\n')
		continue;
}

void Singer::Show() const
{
	cout << "Kategoria: Piosenkarz\n";
	Worker::Show();
	cout << "Skala glosu: " << pv[voice] << endl;
}