#include "studenti.h"

using std::ostream;
using std::endl;
using std::istream;
using std::string;

//metody publiczne
double Student::Average() const
{
	if (ArrayDb::size() > 0)
		return ArrayDb::sum() / ArrayDb::size();
	else
		return 0;
}

const string& Student::Name() const
{
	return (const string&) *this;
}

double& Student::operator[] (int i)
{
	return ArrayDb::operator[](i);		// uzywa funkcji ArrayDb::operator[]()
}

double Student::operator[](int i) const
{
	return ArrayDb::operator[](i);
}

//metoda prywatna
ostream& Student::arr_out(ostream& os) const
{
	int i = 0;
	int lim = ArrayDb::size();
	if (lim > 0)
	{
		for (int i = 0; i < lim; i++)
		{
			os << ArrayDb::operator[](i) << " ";
			if (i % 5 == 4)
				os << endl;
		}
		if (i % 5 != 0)
			os << endl;
	}
	else
		os << " tablica jest pusta ";
	return os;
}

// funkcje zaprzyjaznione

//uzywa funkcji operator>>() klasy string
istream& operator>>(istream& is, Student& stu)
{
	is >> (string &)stu;
	return is;
}

//uzywa funkcji getline(ostream&, const string &) zaprzyjaznionej z klasa string
istream& getline(istream& is, Student& stu)
{
	std::getline(is, (string&)stu);
	return is;
}

//uzywa funkcji operator<<() klasy string
ostream& operator<<(ostream& os, const Student& stu)
{
	os << "Wyniki " << (const string&)stu << ":\n";
	stu.arr_out(os);									// uzywa prywatnej metody do wyswietlania wynikow
	return os;
}