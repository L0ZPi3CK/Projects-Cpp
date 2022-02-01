#pragma once
#include <iostream>

class Vector2D
{


public:

	float x;
	float y;

	//Konstruktory
	Vector2D();
	Vector2D(float x, float y);

	// Metody
	Vector2D& Add(const Vector2D& vec);
	Vector2D& Subtract(const Vector2D& vec);
	Vector2D& Multiply(const Vector2D& vec);
	Vector2D& Divide(const Vector2D& vec);
	Vector2D& Zero();

	//Zaprzyjaznione przeciazenia operatorow
	friend Vector2D& operator+(Vector2D& v1, const Vector2D& v2);
	friend Vector2D& operator-(Vector2D& v1, const Vector2D& v2);
	friend Vector2D& operator*(Vector2D& v1, const Vector2D& v2);
	friend Vector2D& operator/(Vector2D& v1, const Vector2D& v2);

	//Przeciazenie wyjscia
	friend std::ostream& operator<<(std::ostream& stream, const Vector2D& vec);

	//Przeciazenia operatorow
	Vector2D& operator+=(const Vector2D & vec);
	Vector2D& operator-=(const Vector2D & vec);
	Vector2D& operator*=(const Vector2D & vec);
	Vector2D& operator/=(const Vector2D & vec);
	Vector2D& operator*(const int& i);
};