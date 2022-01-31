#pragma once

class Plorg
{
private:
	char imie[19];
	int food_;
public:
	Plorg(const char *name = "Plorg", int food = 50);
	void szamanko(int zarcie);
	void say();
};