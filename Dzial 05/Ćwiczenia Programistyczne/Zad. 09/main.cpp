#include <iostream>

using namespace std;

int main()
{

    struct car
    {
        string marka;
        int rok;
    };

    int liczba;
        cout << "Ile samochodow chcesz skatalogowac?: ";
        cin >> liczba;

    car * cc = new car[liczba];

    for (int n=0;n<liczba;++n)
    {
        cout << "Samochod #" << n+1 << "\n";

        cin.ignore();

        cout << "Wpisz marke samochodu: ";
        getline(cin, cc[n].marka);

        cout << "Wpisz rok produkcji: ";
        cin >> cc[n].rok;
    }

        cout << "Odczytanie wynikow: \n" ;

    for (int n=0;n<liczba;++n)
    {
        cout << "\nMarka samochodu: " << cc[n].marka << "\nOraz jego rok produkcji: " << cc[n].rok;
    }

    return 0;
}
