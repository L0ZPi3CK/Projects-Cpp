#include "workermi.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//Metody klasy Worker
Worker::~Worker() {};

// metody chronione
void Worker::Data() const
{
	cout << "Imie i nazwisko: " << fullname << endl;
	cout << "Numer identyfikacyjny: " << id << endl;
}

void Worker::Get()
{
	getline(cin, fullname);
	cout << "Podaj numer identyfikacyjny: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}


//Metody klasy Waiter
void Waiter::Set()
{
	cout << "Podaj imie i nazwisko kelnera: ";
	Worker::Get();
	Get();
}

void Waiter::Show()
{
	cout << "Kategoria: kelner\n";
	Worker::Data();
	Data();
}

// metody chronione
void Waiter::Data() const
{
	cout << "Elegancja: " << panache << endl;
}

void Waiter::Get()
{
	cout << "Podaj poziom elegancji kelnera: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}


//Metody klasy Singer

const char* Singer::pv[Singer::Vtypes] = 
{ 
	"inna", "alt", "kontralt","sopran","bas","baryton","tenor" 
};

void Singer::Set()
{
	cout << "Podaj imie i nazwisko piosenkarza: ";
	Worker::Get();
	Get();
}

void Singer::Show()
{
	cout << "Katogoria: piosenkarz\n";
	Worker::Data();
	Data();
}

//metody chronione
void Singer::Data() const
{
	cout << "Sala glosu: " << pv[voice] << endl;
}

void Singer::Get()
{
	cout << "Podaj numer dla skali glosu piosenkarza:\n";
	int i;
	for (i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << "  ";
		if (i % 4 == 3)
			cout << endl;
	}
	if (i % 4 != 0)
		cout << endl;
	cin >> voice;
	while (cin.get() != '\n')
		continue;
}


//Metody klasy SingingWaiter
void SingingWaiter::Data() const
{
	Singer::Data();
	Waiter::Data();
}

void SingingWaiter::Get()
{
	Waiter::Get();
	Singer::Get();
}

void SingingWaiter::Set()
{
	cout << "Podaj imie i nazwisko spiewajacego kelnera: ";
	Worker::Get();
	Get();
}

void SingingWaiter::Show()
{
	cout << "Kategoria: spiewajacy kelner\n";
	Worker::Data();
	Data();
}