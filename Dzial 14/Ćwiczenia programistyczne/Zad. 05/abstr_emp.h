#pragma once
#include <iostream>
#include <string>

class abstr_emp
{
private:
	std::string fname;		// imie obiektu abstr_emp
	std::string lname;		// nazwisko obiektu abstr_emp
	std::string job;		// zawód obiektu abstr_emp

public:
	abstr_emp();
	abstr_emp(std::string fn, std::string ln, std::string j);

	virtual void ShowAll() const;											// opisuje i wyswietla wszystkie dane
	virtual void SetAll();													// prosi uzytkownika o podanie wartosci
	virtual ~abstr_emp() = 0;												// wirtualna klasa bazowa

	friend std::ostream& operator<<(std::ostream& os, const abstr_emp& e);	// wyswietla imie i nazwisko
};