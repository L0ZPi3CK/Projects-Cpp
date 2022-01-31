#include <iostream>
#include "nag.h"

int main()
{
	Move ob(2.2,4.4);
	Move kwadrat(5.5,6.6);

	std::cout << "Ob:\n";
	ob.showmove();

	std::cout << "Kwadrat:\n";
	kwadrat.showmove();

	std::cout << "Temp:\n";
	Move temp = ob.add(kwadrat);
	temp.showmove();

}
