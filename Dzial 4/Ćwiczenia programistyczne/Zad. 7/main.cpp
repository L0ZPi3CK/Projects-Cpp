#include <iostream>
#include <string>

using namespace std;


struct analiza
{
    string nazwa;
    double srednica;
    double waga;
};

int main()
{
    string x;
    double y,b;


    cout << "Podaj nazwe firmy pizzy: ";
    cin >> x;

    cout << "Podaj srednice pizzy(w cm): ";
    cin >> y;

    cout << "Podaj wage firmy pizzy(w kg): ";
    cin >> b;

      analiza pizza[1] =
    {
        {x,y,b}
    };

    cout << "\nOto tabela:\n\nNazwa: " << pizza[0].nazwa << "\nSrednica: " << pizza[0].srednica << "cm\nWaga: " << pizza[0].waga << "kg" <<endl;


    return 0;
}
