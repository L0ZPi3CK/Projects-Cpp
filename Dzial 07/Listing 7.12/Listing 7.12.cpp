#include <iostream>
#include <cmath>

struct polar
{
	double distance;		// odleglosc od poczatku ukladu
	double angle;			// kat wzgledem dodatniej polosi x 
};

struct rect
{
	double x;				// odleglosc od początatku ukladu w poziomie 
	double y;				// odleglosc od poczatku ukladu w pionie
};

//Prototypy
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
	using namespace std;
	rect rplace;
	polar pplace;

	cout << "Podaj wartosci x i y: ";
	while (cin >> rplace.x >> rplace.y)		//chytre uzycie cin xd?
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Podaj nastepne liczby lub q aby zakonczyc: ";
	}
	cout << "Gotowe.\n";
	return 0;
}

// Zamiana wspolrzednych prostokatnych na biegunowe
polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;
	answer.distance = sqrt(xypos.x * xypos.x + xypos.x * xypos.x);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}

// Pokazuje wspolrzedne biegunowe, radiany przelicza na stopnie
void show_polar(polar dapos)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "odleglosc = " << dapos.distance;
	cout << ", kat = " << dapos.angle * Rad_to_deg;
	cout << " stopni\n";
}