#pragma warning(disable:4996)		// Program napisany zgodnie z wytycznymi zadania z ksi¹¿ki Stephena Praty, kod pisany by³ w innym kompilatorze wiec 
#include <cstring>					// w nim 'std::strcpy(str, s);' przechodzi³o, a visual juz nie aprobuje tego rozwiazania stad ominiecie tego warninga
#include "stringbad.h"
using std::cout;

//inicjalizacja statycznej skladowej klasy
int StringBad::num_strings = 0;

// metody klasy
// konstuuje obiekt StringBad na bazie ci¹gu jêzyka C

StringBad::StringBad(const char* s)
{
	len = std::strlen(s);			// ustalenie rozmiaru
	str = new char[len + 1];		// przydzial odpowiedzniej ilosci pamieci
	std::strcpy(str, s);			// inicjalizacja wskaznika
	num_strings++;					// uaktualnienie licznika obiektow
	cout << num_strings << ": \"" << str << "\" - obiekt utworzony.\n";				// komunikat diagnostyczny
}

StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++");	// ciag domyslny
	num_strings++;
	cout << num_strings << ": \"" << str << "\" - obiekt domyslny utworzony.\n";	// komunikat diagnostyczny
}

StringBad::~StringBad()\
{
	cout << "\"" << str << "\" - obiekt usuniety, ";	// diagnostyka
	--num_strings;										// koniecznosc
	cout << "sa jeszcze " << num_strings << ".\n";		// diagnostyka
	delete[] str;										// koniecznosc
}

std::ostream& operator<<(std::ostream& os, const StringBad& st)
{
	os << st.str;
	return os;
}

StringBad::StringBad(const StringBad& st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	cout << num_strings << ": \"" << str << "\" - obiekt utworzony.\n";
}

StringBad & StringBad::operator=(const StringBad& st)
{
	if (this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}