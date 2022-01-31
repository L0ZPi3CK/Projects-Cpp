#pragma once

const int arSize = 20;

struct chaff
{
	char dross[arSize];
	int slag = 0;
};


template <class T1>
void strcpy(T1 xpy)
{
	std::cin >> xpy;
	std::cout << std::endl;
}