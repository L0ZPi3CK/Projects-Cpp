#include <iostream>
#include "stonewt.h"

using std::cout;

int main()
{
	Stonewt incognito = 275;	//inicjalizacja konstruktorem
	Stonewt wolfe(286.7);	//rownowazne instrukcji: Stonewtwolfe = 285.7
	Stonewt taft(21, 8);

	
	wolfe.choice = 2;
	cout << wolfe << std::endl;
	cout << 2 * wolfe << std::endl;

	cout << std::endl;

	taft.choice = 2;
	cout << taft << std::endl;
	cout << taft * 2;

	cout << std::endl;
	cout << std::endl;

	Stonewt wofle(286.7);

	if (wofle == wolfe)
	{
		cout << "Siema dzialam!\n";
	}
	else
	{
		cout << "Chyba tez dzialam\n";
	}
	return 0;
}