#include <iostream>
#include <algorithm>
//#include <functional>
#include "nsp1.h"


SALES::Sales::Sales(const double ar[], const int n)
{
	using SALES::Sales;
	average = 0;
	for (int i = 0; i < QUARTERS; i++)
	{
		sales[i] = ar[i];
		average += sales[i];
	}

	std::sort(sales, sales + QUARTERS);
	min = sales[0];
	max = sales[QUARTERS - 1];
	average = average / QUARTERS;
	//std::cout << "s.min = " << s.min << "\ns.max = " << s.max << '\n';

	for (int i = 0; i < QUARTERS; i++)
	{
		sales[i] = 0;
	}
}

SALES::Sales::Sales()
{
	using SALES::Sales;
	average = 0;
	for (int i = 0; i < QUARTERS; i++)
	{
		std::cout << "Podaj " << i << " liczbe: ";
		std::cin >> sales[i];
		average += sales[i];
	}

	std::sort(sales, sales + QUARTERS);
	min = sales[0];
	max = sales[QUARTERS - 1];
	average = average / QUARTERS;

	for (int i = 0; i < QUARTERS; i++)
	{
		sales[i] = 0;
	}
}

void SALES::Sales::showSales()
{
	// wyswietlanie pustych pol niepotrzebne
	/*
	for (int i = 0; i < QUARTERS; i++)
	{
		std::cout << "sales[" << i << "] = " << sales[i] << '\n';
	}
	*/
	std::cout << "min = " << min << '\n';
	std::cout << "max = " << max << '\n';
	std::cout << "average = " << average << '\n';
}