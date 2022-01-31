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
    analiza * p = new analiza;

    cout << "Podaj nazwe pizzy: ";
    cin >> p->nazwa;

    cout << "Podaj srednice pizzy: ";
    cin >> p->srednica;

    cout << "Podaj wage pizzy: ";
    cin >> p->waga;

    cout << "\nOto tabela:\nNazwa: " << p->nazwa << "\nSrednica: " << p->srednica << "\nWaga: " << p->waga <<endl;

    delete p;

    return 0;
}
