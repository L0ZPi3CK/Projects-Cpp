#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
private:
	static const int LIMIT = 256;
	std::string lname;		//nazwisko
	char fname[LIMIT];		//imie
public:
	Person();
	Person(const std::string& ln, const char* fn = "HejTy");
	~Person();
	//Ponizsze metody wyswietlaja imie i nazwisko
	void Show()const;			// w kolejnosci imie nazwisko
	void FormalShow()const;		// w kolejnosci nazwisko imie
};

#endif // !PERSON_H
