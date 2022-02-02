#include <iostream>

// Funkcja do wprowadzania danych
// Funkcja do wyswietlania danych
// funkcja do obliczania sredniej

void wprowadzanie(int x[]);
void wyswietl(int x[]);
double srednia(int x[]);

int main()
{
	int tablica[10];
	wprowadzanie(tablica);
	wyswietl(tablica);
	std::cout << "Srednia wynosi: " << srednia(tablica);
}

void wprowadzanie(int x[])
{
	using namespace std;
	cout << "Podawaj wyniki golfowe ( 0 - 9 )\t\t\t * konczy wprowadzanie!\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "Podaj " << i+1 << " wynik: ";
		cin >> x[i];
		if (!cin)
		{
			cin.clear();
			cin.sync();
			break;
		}			
	}
}

void wyswietl(int x[])
{
	for (int i = 0; i < 10; i++)
	{
		if (!x[i])
			break;
		std::cout << x[i] << "\t";
	}
}

double srednia(int x[])
{
	double suma = 0;
	int licznik = 0;
	for (int i = 0; i < 10; i++)
	{
		if (!x[i])
			break;
		else
		{
			suma += x[i];
			licznik++;
		}
	}
	return (suma / licznik);
}