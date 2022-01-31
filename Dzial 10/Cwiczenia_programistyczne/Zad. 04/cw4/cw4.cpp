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

	SALES::Sales sales2 = SALES::Sales();
	sales2.showSales();

	SALES::Sales sales1(arar, arrSize);
	sales1.showSales();
	//std::cout << std::endl;
	//showSales(sales2);
}
