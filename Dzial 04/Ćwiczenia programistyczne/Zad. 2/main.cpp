#include <iostream>
#include <cstring>


int main()
{
    using namespace std;
    string Size [3];
    Size[0] = {};
    Size[1] = {};
    Size[2] = {};
    int ocena,lata;

    cout << "Jak masz na imie: ";
    cin >> Size[0];
    cin >> Size[1];
    cout << "Jak sie nazywasz: ";
    cin >> Size[2];

    cout << "Na jaka ocene zaslugujesz: ";
    cin >> ocena;

    cout << "Ile masz lat: ";
    cin >> lata;

    cout << "Nazwisko: " << Size[0] << " " << Size[1] << "," << Size[2] << endl;
    cout << "Ocena: " << ocena - 1 << endl;
    cout << "Wiek: " << lata << endl;
    return 0;
}
