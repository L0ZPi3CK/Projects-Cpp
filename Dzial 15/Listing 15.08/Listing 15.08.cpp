#include <iostream>
#include <cfloat>

double hmean(double a, double b, double* ans);

int main()
{
	double x, y, z;
	std::cout << "Podaj dwie liczby: ";
	while (std::cin >> x >> y)
	{
		if (hmean(x, y, &z))
			std::cout << "Srednia harmoniczna liczb " << x << " i " << y << " wynosi " << z << std::endl;
		else
			std::cout << "Suma liczb nie moze wynosic 0 | sproboj jeszcze raz.\n";
		std::cout << "Podaj kolejna pare liczb <w, aby wyjsc>: ";
	}
	std::cout << "Koniec";
	return 0;
}

double hmean(double a, double b, double* ans)
{
	if (a == -b)
	{
		*ans = DBL_MAX;
		return false;
	}
	else
	{
		*ans = 2.0 * a * b / (a + b);
		return true;
	}

}