#pragma once

class Stonewt
{
private:
	enum {Lbs_per_stn = 14};	//liczba funtow na kamien
	int stone;					//masa w calych kamieniach
	double pds_left;			//reszta w funtach
	double pounds;				//masa w funtach
public:
	Stonewt(double lbs);			//konstruktor dla funtow
	Stonewt(int stn, double lbs);	//konstruktor dla kamieni i funtow
	Stonewt();						//donstruktor domyslny
	~Stonewt();						//dekonstruktor

	void show_lbs()const;		//wyswietla mase w funtach
	void show_stn()const;		//wyswietla mase w kamieniach
};

