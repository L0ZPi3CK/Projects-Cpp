#include <iostream>
#include <string>

using namespace std;

struct Batonik // Deklaracja struktury

    {
    string Marka;
    double Waga;
    int kalorie;
    };

int main()
{
    Batonik * bb = new Batonik [3];

    bb[0].Marka = "Andrzej";
    bb[0].Waga = 2.5;
    bb[0].kalorie = 1;

    bb[1].Marka = "Adam";
    bb[1].Waga = 3.5;
    bb[1].kalorie = 2;

    bb[2].Marka = "Admin";
    bb[2].Waga = 4.5;
    bb[2].kalorie = 3;

    cout << "Oto Tabela 0 = " << bb[0].Marka << "\n" << bb[0].Waga << "\n" << bb[0].kalorie << endl;
    cout << "Oto Tabela 1 = " << bb[1].Marka << "\n" << bb[1].Waga << "\n" << bb[1].kalorie << endl;
    cout << "Oto Tabela 2 = " << bb[2].Marka << "\n" << bb[2].Waga << "\n" << bb[2].kalorie << endl;
    return 0;
}
