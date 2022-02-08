#include <iostream>
#include "string1.h"

int main()
{
	/*
	String name = "Konrad";
	name.stringlow();
	std::cout << "Ma a :" << name.has('a');
	*/
	String s1(" i ucze sie C++.");
	String s2 = "Podaj swoje imie: ";
	String s3;
	std::cout << s2;			// przeciazone operatory <<
	std::cin >> s3;				// przeciazone operatory >>
	s2 = "Mam na imie " + s3;	// przeciazone operatory = i +
	std::cout << s2 << ".\n";
	
	s2 = s2 + s1;
	
	s2.stringup();				// zamiana ciagu liter na wielkie
	std::cout << "Ciag\n" << s2 << "\nzawiera " << s2.has('A') << " 'A'.\n";
	s1 = "czerwona";			// String (const char *) 
	String rgb[3] = { String(s1), String("zielona"), String("niebieska") };
	std::cout << "Podaj nazwe barwy podstawowej: ";
	String ans;
	bool success = false;
	while (std::cin >> ans)
	{
		ans.stringlow();
		for (int i = 0; i < 3; i++)
		{
			if(ans == rgb[i])
			{
				std::cout << "Prawidlowo!\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			std::cout << "Sprobuj ponownie!\n";
	}
	std::cout << "Zegnam\n";
	return 0;
	
}
