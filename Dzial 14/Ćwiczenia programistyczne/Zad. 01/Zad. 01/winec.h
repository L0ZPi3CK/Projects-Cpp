#pragma once
#include <valarray>
#include <string>

typedef std::valarray<int> ArrayInt;
typedef std::pair<ArrayInt, ArrayInt> PairArray;			// 14.9 listing

class Wine
{
private:
	std::string name;
	PairArray storage;

public:
	Wine();
	//~Wine();

	// inicjalizuje skladowa label parametrem l, liczbe lat parametrem y, roczniki parametrem yr[], skladowa bottles parametrem bot[]
	Wine(const char* l, int y, const int yr[], const int bot[]);

	// inicjalizuje skladowa label parametrem l, liczbe lat parametrem y	// tworzy tablice obiektow o dlugoscy y
	Wine(const char* l, int y);


	void GetBottles();
	void Show();
};


