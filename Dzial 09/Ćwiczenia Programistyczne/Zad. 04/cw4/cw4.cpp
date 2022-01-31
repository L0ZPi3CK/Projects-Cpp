#include <iostream>
#include "nsp1.h"

const int arrSize = 4;

int main()
{
	double arar[arrSize];

	for (int i = 0; i < arrSize; i++)
	{
		std::cout << "Podaj wartosci do arar[" << i << "] = ";
		std::cin >> arar[i];
		std::cout << std::endl;
	}

	using SALES::Sales;
	Sales sales1;
	Sales sales2;

	std::cout << std::endl;
	setSales(sales1, arar, arrSize);
	setSales(sales2);
	showSales(sales1);
	std::cout << std::endl;
	showSales(sales2);
}
