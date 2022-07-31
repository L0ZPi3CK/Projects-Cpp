#include <iostream>
#include "tv.h"

int main()
{
	using std::cout;
	Tv s42;
	std::cout << "Poczatkowe ustawienie telewizora 42\":\n";
	s42.settings();
	s42.onOff();
	s42.chanUp();
	std::cout << "Nowe ustawienia telewizora 42\":\n";
	s42.settings();

	Remote grey;

	grey.set_chan(s42, 10);
	grey.volUp(s42);
	grey.volUp(s42);
	std::cout << "\nUstawienia telewizora 42\" po uzyciu pilota:\n";
	s42.settings();

	Tv s58(Tv::On);
	s58.set_mode();
	grey.set_chan(s58, 28);
	std::cout << "\nUstawienia telewizora 58\"\n";
	s58.settings();

	return 0;
}
