#pragma once
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char* str;						// wskaznik ciagu
	int len;						// dlugosc ciagu
	static int num_strings;			// liczba obiektow klasy
	static const int CINLIM = 80;	// limit dlugosci ciagu na wejciu
public:
	// konstruktory i metody klasy
	String(const char* s);
	String();
	String(const String&);
	~String();
	int length()const { return len; }
	void stringlow();
	void stringup();
	int has(char x);
	// metody przeciazajace operatory
	String& operator=(const String&);
	String& operator=(const char*);
	char& operator[](int i);
	const char& operator[](int i) const;

	// funkcje zaprzyjaznione przeciazajace operatory
	friend bool operator<(const String& st1, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st1, const String& st2);
	friend String operator+(const String& st1, const String& st2);
	friend ostream& operator <<(ostream& os, const String& st);
	friend istream& operator >>(istream& is, String& st);

	void showme();

	// metoda statyczna
	static int HowMany();
};

