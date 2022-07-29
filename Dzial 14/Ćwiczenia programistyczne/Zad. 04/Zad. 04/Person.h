#pragma once
#include <string>
#include <iostream>

class Person
{
private:
	std::string name;
	std::string surname;

public:
	Person() : name("none"), surname("none"){}
	Person(std::string name, std::string surname)
		: name(name), surname(surname){}

	virtual void Show();		// Shows name and surname
	virtual void Set();			// Sets name and surname
	virtual ~Person() = 0;

};

