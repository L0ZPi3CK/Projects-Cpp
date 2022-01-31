#include <cmath>
#include "vect.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
	// przelicznik radianow na stopnie
	const double Rad_to_deg = 45.0 / atan(1.0);		//powinno wyjsc okolo 57.2957795130823

	//metody prywatne
	void Vector::set_mag()			//oblicza dlugosc wektora ze skladowych x i y
	{
		mag = sqrt(x * x + y * y);
	}
	void Vector::set_ang()
	{
		if (x == 0 && y == 0)
			ang = 0.0;
		else
			ang = atan2(y, x);
	}
	void Vector::set_x()			//oblicza skladowa x ze wspolrzednych biegunowych
	{
		x = mag * sin(ang);
	}
	void Vector::set_y()
	{
		y = mag * sin(ang);
	}

	//metody publiczne
	Vector::Vector()
	{
		x = y = mag = ang = 0.0;
		mode = RECT;
	}

	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL)
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Niepoprawna wartosc trzeciego argumentu Vector() --";
			cout << "zeruje wektor\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	// zerowanie wartosci wektora dla zadanych wspolrzednych kartezjanskich (dla RECT)
	// albo dla zadanych wspolrzednych biegunowych (POL)

	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();

		}
		else if (form == POL)
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Niepoprawny trzeci argument set() -- ";
			cout << "zeruje wektor\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}
	Vector::~Vector()	//destruktor
	{
	}

	void Vector::polar_mode()
	{
		mode = POL;
	}

	void Vector::rect_mode()
	{
		mode = RECT;
	}

	//przeciazone operatory
	Vector Vector::operator+(const Vector& b)const		//dodawanie dwoch wektorow
	{
		return Vector(x + b.x, y + b.y);
	}

	Vector Vector::operator-(const Vector& b)const		//odejmowanie wektora b od wektora a
	{
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator-()const		//zmienia znak wektora
	{
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double	n)const		// mnozy wektor wywolujacy przez n
	{
		return Vector(n * x, n * y);
	}


	//Funkcje zaprzyjaznione

	Vector operator*(double n, const Vector& a)	//mnozy n przez wektor a
	{
		return a * n;
	}

	//wyswietla wspolrzedne wektora (prostokatne w trybie REACT, biegunowe w trybie POL)
	std::ostream& operator<<(std::ostream& os, const Vector& v)
	{
		if (v.mode == Vector::RECT)
			os << "(x,y) = )" << v.x << ", " << v.y << ")";
		else if (v.mode == Vector::POL)
		{
			os << "(m,a) = (" << v.mag << ", " << v.ang * Rad_to_deg << ")";
		}
		else
			os << "Niepoprawny tryb reprezentacji obiektu wektora";
		return os;
	}
}	// konec przestrzeni nazw VECTOR