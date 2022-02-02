#include <iostream>

double harmoniczna(double x, double y);

int main()
{
	using namespace std;
	double number1 = 0.1, number2 = 0.1;

	for(;;)
	{
		cout << "Podaj pierwsza liczbe: ";
		cin >> number1;
		cout << "Podaj druga liczbe: ";
		cin >> number2;

		if (number1 == 0 || number2 == 0)
		{
			cout << "Podales 0, to koniec!";
			break;
		}
		else
		{
			cout << "Srednia harmoniczna " << number1 << " i " << number2 << " wynosi: " << harmoniczna(number1, number2) << "\n\n";
		}
	}
}

double harmoniczna(double x, double y)
{
	double wynik = 2.0 * x * y / (x + y);
	return wynik;
}