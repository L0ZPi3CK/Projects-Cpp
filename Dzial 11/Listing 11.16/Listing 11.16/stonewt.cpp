#include <iostream>
#include "stonewt.h"

using std::cout;
Stonewt::Stonewt(double lbs)	// konstruuje obiekt Stonewt z wartosci typu double
{
	stone = int(lbs) / Lbs_per_stn;		//dzielenie calkowite
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)	// konstuuje obiekt Stonewt z liczby kamieni i funtow
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()	//konstruktor domyslny zeruje obiekt
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()	//destruktor
{
}

void Stonewt::show_stn()const	//pokazuje mase w kamieniach
{
	cout << stone << " kamieni, " << pds_left << " funtow\n";
}
void Stonewt::show_lbs()const	//pokazuje mase w funtach
{
	cout << pounds << "funtow\n";
}