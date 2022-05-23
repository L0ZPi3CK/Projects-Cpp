#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stcktp1.h"

const int NUM = 10;

int main()
{
	std::srand(std::time(0));	// inicjalizacja funkcji rand()
	std::cout << "Podaj rozmiar stosu: ";
	int stacksize;
	std::cin >> stacksize;		
	
	Stack<const char*> st(stacksize);	// tworzy pusty stos o pojemnosci stacksize
	
	// pojemnik na teczki przychodzace
	const char* in[NUM] =
	{
		" 1: Henryk Gilgamesz",
		" 2: Kinga Isztar",
		" 3: Beata Roker",
		" 4: Jan Flagranti",
		" 5: Wolfgang Mocny",
		" 7: Patrycja Kup",
		" 6: Jacek Almond",
		" 8: Ksawery Papryka"
		" 9: Julian Mor",
		" 10: Marian Macher"
	};

	// pojemnik na teczki wychodzace
	const char* out[NUM];

	int processed = 0;
	int nextin = 0;
	while (processed < NUM)
	{
		if (st.isempty())
			st.push(in[nextin++]);
		else if (st.isfull())
			st.pop(out[processed++]);
		else if (std::rand() % 2 && nextin < NUM)	// szanse pol na pol
			st.push(in[nextin++]);
		else
			st.pop(out[processed++]);
	}

	for (int i = 0; i < NUM; i++)
		std::cout << out[i] << std::endl;

	std::cout << "Koniec\n";
	return 0;
}