#include <iostream>

using namespace std;
struct wplacajacy
{
    string nazwisko;
    double kwota;
};

int main()
{
    int n,licznik;
    cout << "Podaj liczbe sponsorow: ";
    cin >> n;
    licznik = n;
    wplacajacy* osoba = new wplacajacy[n];
    cout << "Podanie '*' konczy wprowadzanie sponsorow!\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nPodaj nazwisko sponsora: ";
        cin >> osoba[i].nazwisko;
        if (osoba[i].nazwisko == "*")
        {
            break;
        }
        else
        {
            cout << "Podaj kwote: ";
            cin >> osoba[i].kwota;
        }        
    }
    int z = 0;
    cout << "\nNasi Najwspanialszy Sponsorzy:\n";
    for (int i = 0; i < n; i++)
    {
        if (osoba[i].kwota >= 10000)
        {
            cout << osoba[i].nazwisko << " z kwota: " << osoba[i].kwota << endl;
            licznik--;
        }
        if (z == 0)
        {
            cout << "\nNasi wspaniali sponsorzy:\n";
            z++;
        }
        else if (osoba[i].kwota < 10000 && osoba[i].kwota > 0)
        {            
            cout << osoba[i].nazwisko << " z kwota: " << osoba[i].kwota << endl;
            licznik--;
        }
    }
    for (int i = 0; i < licznik; i++)
    {
        cout << "---Brak---" << endl;
    }


}