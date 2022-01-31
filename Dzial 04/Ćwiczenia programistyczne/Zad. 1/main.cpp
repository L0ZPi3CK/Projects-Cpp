#include <iostream>
#include <cstring>


int main()
{
    using namespace std;
    const int Size = 20;
    char name[Size];
    char name2[Size];

    int ocena,lata;

    cout << "Jak masz na imie: ";
    cin.getline(name, Size);

    cout << "Jak sie nazywasz: ";
    cin.getline(name2, Size);

    cout << "Na jaka ocene zaslugujesz: ";
    cin >> ocena;

    cout << "Ile masz lat: ";
    cin >> lata;

    cout << "Nazwisko: " << name2 << "," << name << endl;
    cout << "Ocena: " << ocena - 1 << endl;
    cout << "Wiek: " << lata << endl;
    return 0;
}
