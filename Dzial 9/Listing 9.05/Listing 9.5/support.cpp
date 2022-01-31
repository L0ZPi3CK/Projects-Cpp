#include <iostream>

extern double warming;		// deklaracja referencyjna zmiennej warming z innegom pliku

void update(double dt);
void local();
using std::cout;

void update(double dt)
{
	extern double warming;
	warming += dt;			// odwo³anie do globalnej zmiennej warming
	cout << "Zwiekszam parametr ocieplenia do " << warming << " stopni.\n";
}

void local()
{
	double warming = 0.8;	// zmienna lokalna przeslania zmienna globalna
	cout << "Loikalne ocieplenie wynosi " << warming << " stopni.\n";
	cout << "Ale globalne ma watrosc " << ::warming << " stopni.\n";
}