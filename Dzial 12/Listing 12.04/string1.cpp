#include <cstring>
#include "string1.h"

using std::cin;
using std::cout;

// inicjalizacja statycznej skladowej klasy
int String::num_strings = 0;

// metoda statyczna
int String::HowMany()
{
	return num_strings;
}

// metody klasy
String::String(const char* s)	// konstruktor
{
	len = std::strlen(s);		// ustawienie dlugosci ciagu
	str = new char[len + 1];	// przydzial pamieci
	strcpy_s(str, len + 1, s);		// inicjalizacja wskaznika obiektu
	num_strings++;				// aktualizacja licznika obiektu
}


String::String()				// kostruktor domyslny
{
	len = 4;
	str = new char[1];
	str[0] = '\0';				// domyslny ciag obiektow klasy
	num_strings++;
}

String::String(const String& st)
{
	num_strings++;				// aktualizacja skladowej statycznej
	len = st.len;				// ta sama dlugosc ciagu
	str = new char[len + 1];	// przydzial pamieci
	strcpy_s(str, len + 1, st.str);	// skopiowanie ciagu
}

String::~String()				// destruktor
{
	--num_strings;
	delete[] str;
}

// metody przeciazajace operatory
// przypisywanie obiektu klasy String do innego obiektu tej klasy
String& String::operator=(const String& st)
{
	if (this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
	return *this;
}

// przypisywanie ciagu c do obiektu klasy string
String& String::operator=(const char* s)
{
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
	return *this;
}

// pelny dostep do znakow ciagu (dla obiektow zwyklych)
char& String::operator[](int i)
{
	return str[i];
}

// dostep (do odczytu) do znakow ciagu (dla obiektow const)
const char& String::operator[](int i)const
{
	return str[i];
}

// zaprzyjaznione funkcje przeciazajace operatory
bool operator<(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
	return st2 < st1;
}

bool operator==(const String& st1, const String& st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

//wyprowadzenie ciagu na wyjscie
ostream& operator <<(ostream& os, const String& st)
{
	os << st.str;
	return os;
}

istream& operator >>(istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}