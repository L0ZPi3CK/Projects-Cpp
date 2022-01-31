#include <iostream>
#include "stonewt.h"

using std::cout;

void display(const Stonewt& st, int n);

int main()
{
	Stonewt incognito = 275;	//inicjalizacja konstruktorem
	Stonewt wolfe(285.7);	//rownowazne instrukcji: Stonewtwolfe = 285.7
	Stonewt taft(21, 8);

	cout << "Celebryta wazyl: ";
	incognito.show_stn();
	cout << "Detektyw wazyl: ";
	wolfe.show_stn();
	cout << "Prezydent wazyl: ";
	taft.show_lbs();

	incognito = 276.8;	//konwersja konstruktorem
	taft = 325;			// rownowazne instrukcji taft = Stonewt(325);

	cout << "Po obiedzie celebryta wazyl: ";
	incognito.show_stn();
	cout << "Po obiedzie prezydent wazyk: ";
	taft.show_lbs();

	display(taft, 2);
	cout << "A zapasnik wazy jesze wiecej.\n";
	display(427, 2);
	cout << "Nie pozostal kamien na kamieniu\n";
	return 0;
}

void display(const Stonewt& st, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Oho! ";
		st.show_stn();
	}
}
