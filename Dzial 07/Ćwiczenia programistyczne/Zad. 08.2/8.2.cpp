#include <iostream>
#include <array>
#include <string>+

//Dane stale
const int Seasons = 4;
const char* char_arr[4] =
{
    "Wiosna",
    "Lato",
    "Jesien",
    "Zima"
};

 //Struktura
struct str_struktura
{
    double arr[Seasons];
}wydatki;

//Prototoy
void fill(str_struktura pa, const int Seasons);
void show(str_struktura da, const int Seasons);

int main()
{
    fill(wydatki,Seasons);
    show(wydatki,Seasons);
    return 0;
}

void fill(str_struktura pa, const int Seasons)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Podaj wydatki za okres >>" << char_arr[i] << "<<: ";
        cin >> wydatki.arr[i];
    }
}

void show(str_struktura da, const int Seasons)
{
    using namespace std;
    double total = 0.0;
    cout << "\nWydatki\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << char_arr[i] << ": " << wydatki.arr[i] << " zl" << endl;
        total += wydatki.arr[i];
    }
    cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
}