#include <iostream>
#include "employee.h"
#include "highfink.h"


using namespace std;

int main(void)
{
	employee em("Tadeusz", "Hubert","Sprzedawca");
	cout << em << endl;
	em.ShowAll();

	cout  << "*****************************************" << endl;

	manager ma("Amforiusz", "Smoczewski", "Malarz", 5);
	cout << ma << endl;
	ma.ShowAll();

	cout << "*****************************************" << endl;

	fink fi("Maurycy", "Olkuski", "Hydraulik", "Julian Bar");
	cout << fi << endl;
	fi.ShowAll();

	cout << "*****************************************" << endl;

	highfink hf(ma, "Jan kudlaty");
	hf.ShowAll();

	cout << "*****************************************" << endl;

	cout << "Wcisnij dowolny przycisk aby przejsc do nastepnego etapu: ";
	cin.get();

	highfink hf2;
	hf2.SetAll();

	cout << "*****************************************" << endl;	
	cout << "Uzywa wskaznika abstr_emp * \n";
	abstr_emp* tri[4] = { &em, &fi, &hf, &hf2 };
	for (int i = 0; i < 4; i++)
	{
		tri[i]->ShowAll();
	}

	return 0;
}
