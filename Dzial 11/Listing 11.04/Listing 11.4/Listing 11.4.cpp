#include <iostream>
#include "nag.h"


int main()
{
	using std::cout;
	using std::endl;

	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "czas planowania = ";
	planning.Show();
	cout << endl;

	cout << "czas kodowania = ";
	coding.Show();
	cout << endl;

	cout << "czas poprawiania = ";
	fixing.Show();
	cout << endl;

	total = coding + fixing;
	cout << "lacznie (coding + fixing) = ";
	total.Show();
	cout << endl;

	Time morefixing(3, 28);
	cout << "kolejne poprawki = ";
	morefixing.Show();
	cout << endl;
	total = morefixing.operator+(total);
	//zapis funkcjonalny
	cout << "lacznie (morefixing.operator+(total)) = ";
	total.Show();
	cout << endl;

	return 0;
}
