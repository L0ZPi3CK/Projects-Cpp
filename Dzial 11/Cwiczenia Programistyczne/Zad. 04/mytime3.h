#pragma once
#include <iostream>
using std::ostream;

class Time
{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);

	friend Time operator+(const Time& t, const Time& t2);
	friend Time operator-(const Time& t, const Time& t2);
	friend Time operator*(const Time& t, const double m);

	friend Time operator*(double m, const Time& t)
	{
		return t * m;
	}

	friend ostream& operator<<(ostream& os, const Time& t);
};

