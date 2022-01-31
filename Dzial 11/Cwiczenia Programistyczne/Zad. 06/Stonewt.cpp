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
	stone = pounds = pds_left = choice = 0;
}
Stonewt::~Stonewt()	//destruktor
{
}

// Zaprzyjaznione przeciazenia operatorow

Stonewt operator+(const Stonewt& s1, const Stonewt& s2)
{
	Stonewt temp;
	temp.stone = s1.stone + s2.stone;
	temp.pds_left = s1.pds_left + s2.pds_left;
	temp.pounds = s1.pounds + s2.pounds;

	return temp;
}
Stonewt operator-(const Stonewt& s1, const Stonewt& s2)
{
	Stonewt temp;
	temp.stone = s1.stone - s2.stone;
	temp.pds_left = s1.pds_left - s2.pds_left;
	temp.pounds = s1.pounds - s2.pounds;

	return temp;
}

ostream& operator<<(ostream& os, const Stonewt& s)
{
	if (s.choice == 0)
	{
		os << s.stone << " kamieni, " << s.pds_left << " funtow";
	}
	else if (s.choice == 1)
	{
		os << s.pounds << " funtow";
	}
	else if (s.choice == 2)
	{
		os << int(s.pounds) << " funtow";
	}
	return os;
}

Stonewt operator*(double m, const Stonewt& s)
{
	Stonewt temp;
	int temp_left = 0;
	temp.choice = s.choice;

	temp.pds_left = s.pds_left * m;
	temp.stone = (s.stone * m) + int(temp.pds_left) / temp.Lbs_per_stn;

	if (temp.pds_left >= temp.Lbs_per_stn)
	{
		temp_left = int(temp.pds_left) / temp.Lbs_per_stn;
		temp.pds_left -= (temp_left * temp.Lbs_per_stn);
	}

	//temp.pds_left = temp.Lbs_per_stn - ((int(temp.pds_left) / temp.Lbs_per_stn) * temp.Lbs_per_stn);
	temp.pounds = m * s.pounds;
	return temp;
}
Stonewt operator*(const Stonewt& s, double m)
{
	Stonewt temp;
	int temp_left = 0;
	temp.choice = s.choice;

	temp.pds_left = s.pds_left * m;
	temp.stone = (s.stone * m) + int(temp.pds_left) / temp.Lbs_per_stn;
	if (temp.pds_left >= temp.Lbs_per_stn)
	{
		temp_left = int(temp.pds_left) / temp.Lbs_per_stn;
		temp.pds_left -= (temp_left * temp.Lbs_per_stn);
	}


	//temp.pds_left = temp.Lbs_per_stn - ((int(temp.pds_left) / temp.Lbs_per_stn) * temp.Lbs_per_stn);
	temp.pounds = m * s.pounds;
	return temp;
}


bool operator==(const Stonewt& s1, const Stonewt& s2)
{
	if ((s1.stone == s2.stone) && (s1.pds_left == s2.pds_left) && (s1.pounds == s2.pounds))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator!=(const Stonewt& s1, const Stonewt& s2)
{
	if ((s1.stone != s2.stone) && (s1.pds_left != s2.pds_left) && (s1.pounds != s2.pounds))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator<(const Stonewt& s1, const Stonewt& s2)
{
	if ((s1.stone < s2.stone) && (s1.pds_left < s2.pds_left) && (s1.pounds < s2.pounds))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator>(const Stonewt& s1, const Stonewt& s2)
{
	if ((s1.stone > s2.stone) && (s1.pds_left > s2.pds_left) && (s1.pounds > s2.pounds))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator<=(const Stonewt& s1, const Stonewt& s2)
{
	if ((s1.stone <= s2.stone) && (s1.pds_left <= s2.pds_left) && (s1.pounds <= s2.pounds))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator>=(const Stonewt& s1, const Stonewt& s2)
{
	if ((s1.stone >= s2.stone) && (s1.pds_left >= s2.pds_left) && (s1.pounds >= s2.pounds))
	{
		return true;
	}
	else
	{
		return false;
	}
}