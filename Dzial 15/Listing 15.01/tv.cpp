#include <iostream>
#include "tv.h"


bool Tv::volUp()
{
	if (volume < MaxVal)
	{
		volume++;
		return true;
	}
	else
	{
		return false;
	}
}

bool Tv::volDown()
{
	if (volume > MinVal())
	{
		volume--;
		return true;
	}
	else
	{
		return false;
	}
}

void Tv::chanUp()
{
	if (channel < maxchannel)
	{
		channel++;
	}
	else
	{
		channel = 1;
	}
}

void Tv::chanDown()
{
	if (channel > 1)
	{
		channel--;
	}
	else
	{
		channel = maxchannel;
	}
}

void Tv::settings() const
{
	using std::cout;
	using std::endl;
	std::cout << "Telewizor jest " << (state == Off ? "Wylaczony" : "Wlaczony") << std::endl;
	if (state == On)
	{
		cout << "Glosnosc = " << volume << std::endl;
		cout << "Program = " << channel << std::endl;
		cout << "Tryb = " << (mode == Antenna ? "antena" : "kabel") << std::endl;
		cout << "Wejscie = " << (input == TV ? "TV" : "DVD") << std::endl;
	}
}