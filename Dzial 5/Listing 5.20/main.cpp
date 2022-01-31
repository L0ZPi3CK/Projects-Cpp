#include <iostream>

const int Cities = 5;
const int Years = 4;


int main()
{

    using namespace std;

    const char * cities[Cities] =   // Tablica wskaxnikow
    {
        "Jelenia gora",             // 5 lancuchow
        "Zielona gora",
        "Stara gora",
        "Gorki",
        "Wilga gora",
    };

    int maxtemps [Years][Cities] =  // Tablica dwuwymiarowa
    {
    {32, 31, 32, 34, 29},
    {28, 31, 31, 32, 30},
    {31, 27, 29, 30, 33},
    {30, 31, 29, 33, 32}
    };

    cout << "Temperatury maksymalne (C) w latach 2008-2011\n\n";

    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }
    return 0;
}
