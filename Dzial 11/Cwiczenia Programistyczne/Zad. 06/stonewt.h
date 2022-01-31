#pragma once
#include <iostream>
using std::ostream;

class Stonewt
{
private:
	enum { Lbs_per_stn = 14 };	//liczba funtow na kamien
	int stone;					//masa w calych kamieniach
	double pds_left;			//reszta w funtach
	double pounds;				//masa w funtach

public:
	int choice = 0;
	Stonewt(double lbs);			//konstruktor dla funtow
	Stonewt(int stn, double lbs);	//konstruktor dla kamieni i funtow
	Stonewt();						//donstruktor domyslny
	~Stonewt();						//dekonstruktor

	friend Stonewt operator+(const Stonewt& s1, const Stonewt& s2);
	friend Stonewt operator-(const Stonewt& s1, const Stonewt& s2);

	friend Stonewt operator*(double m, const Stonewt& s);
	friend Stonewt operator*(const Stonewt& s, double m);

	friend ostream& operator<<(ostream& os, const Stonewt& s);

	friend bool operator==(const Stonewt& s1, const Stonewt& s2);
	friend bool operator!=(const Stonewt& s1, const Stonewt& s2);
	friend bool operator<(const Stonewt& s1, const Stonewt& s2);
	friend bool operator>(const Stonewt& s1, const Stonewt& s2);
	friend bool operator<=(const Stonewt& s1, const Stonewt& s2);
	friend bool operator>=(const Stonewt& s1, const Stonewt& s2);

};

