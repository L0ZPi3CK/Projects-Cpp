#include <iostream>
#include <algorithm>
//#include <functional>
#include "nsp1.h"


void SALES::setSales(Sales& s, const double ar[], const int n)
{
	s.average = 0;
	for (int i = 0; i < n; i++)
	{
		s.sales[i] = ar[i];
		s.average += s.sales[i];
	}	
		
	std::sort(s.sales, s.sales + n);
	s.min = s.sales[0];
	s.max = s.sales[QUARTERS-1];
	s.average = s.average / n;
	//std::cout << "s.min = " << s.min << "\ns.max = " << s.max << '\n';

	for (int i = 0; i < n; i++)
	{
		s.sales[i] = 0;
	}
}

void SALES::setSales(Sales& s)
{
	s.average = 0;
	for (int i = 0; i < QUARTERS; i++)
	{
		std::cout << "Podaj " << i << " liczbe: ";
		std::cin >> s.sales[i];
		s.average += s.sales[i];
	}

	std::sort(s.sales, s.sales + QUARTERS);
	s.min = s.sales[0];
	s.max = s.sales[QUARTERS-1];
	s.average = s.average / QUARTERS;

	for (int i = 0; i < QUARTERS; i++)
	{
		s.sales[i] = 0;
	}
}

void SALES::showSales(const Sales& s)
{
	// wyswietlanie pustych pol niepotrzebne
	/*
	for (int i = 0; i < QUARTERS; i++)
	{
		std::cout << "sales[" << i << "] = " << s.sales[i] << '\n';
	}
	*/
	std::cout << "min = " << s.min << '\n';
	std::cout << "max = " << s.max << '\n';
	std::cout << "average = " << s.average << '\n';
}