#pragma once
#include <valarray>
#include <string>

typedef std::valarray<int> ArrayInt;
typedef std::pair<ArrayInt, ArrayInt> PairArray;			// 14.19 listing

class Wine
{
private:
	std::string name;
	PairArray storage;
	int vintage_count;

public:
	Wine();
	//~Wine();

	// inicjalizuje skladowa label parametrem l, liczbe lat parametrem y, roczniki parametrem yr[], skladowa bottles parametrem bot[]
	Wine(const char* l, int y, const int yr[], const int bot[]);

	// inicjalizuje skladowa label parametrem l, liczbe lat parametrem y	// tworzy tablice obiektow o dlugoscy y
	Wine(const char* l, int y);


	void GetBottles();
	void Show();	
	void set_vinatage_count(int a) { vintage_count = a; };

	int Sum();

	int get_vintage_count() { return vintage_count; };
	std::string& Label() { return name; };
};


