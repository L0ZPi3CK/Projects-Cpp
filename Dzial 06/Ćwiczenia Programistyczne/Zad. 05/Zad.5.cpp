#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double zarobki,podatek;
    cout << "Podaj ile zarabiasz: ";
    cin >> zarobki;

    if (zarobki <= 5000 && zarobki >=0)
    {
        podatek = zarobki * 0, 00;
        cout << "Powinienes odprowadzic: " << podatek << "Twarpow" << endl;
        cout << "Opcja 1";
    }
    else if (zarobki > 5000 && zarobki <= 15000)
    {
        podatek = (zarobki - 5000)*0.10;
        cout << "Powinienes odprowadzic: " << podatek << "Twarpow" << endl;
        cout << "Opcja 2";
    }
    else if (zarobki > 15000 && zarobki <= 35000)
    {
        podatek = (5000 * 0.00 + 10000 * 0.10 + (zarobki-15000)*0.15);
        cout << "Powinienes odprowadzic: " << podatek << "Twarpow" << endl;
        cout << "Opcja 3";
    }
    else if (zarobki > 35000)
    {
        podatek = (5000 * 0.00 + 10000 * 0.10 + 20000 * 0.15 + (zarobki - 35000) * 0.20);
        cout << "Powinienes odprowadzic: " << podatek << "Twarpow" << endl;
        cout << "Opcja 4";
    }
    else
    {
        cout << "Podano niepoprawna wartosc!";
    }
}