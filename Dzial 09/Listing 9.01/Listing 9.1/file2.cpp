#include <iostream>
#include <cmath>
#include "coordin.h"

polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar anwser;

	anwser.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	anwser.angle = atan2(xypos.y, xypos.x);

	return anwser;
}

void show_polar(polar dapos)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;
	cout << "odleglosc = " << dapos.distance;
	cout << ", odchylenie = " << dapos.angle * Rad_to_deg;
	cout << "stopni\n";
}