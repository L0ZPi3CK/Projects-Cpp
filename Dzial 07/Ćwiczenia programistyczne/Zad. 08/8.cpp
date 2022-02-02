#include <iostream>
#include <array>
#include <string>

//Dane stale
const int Seasons = 4;
const char* char_arr[4] =
{
    "Wiosna",
    "Lato",
    "Jesien",
    "Zima"
};

//Prototoy
void fill(double pa[],const int Seasons);
void show(double da[], const int Seasons);

int main()
{
    double expenses[Seasons];
    //std::array<double, Seasons> expenses;
    fill(expenses, Seasons);
    show(expenses, Seasons);
    return 0;
}

void fill(double pa[], const int Seasons)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Podaj wydatki za okres >>" << char_arr[i] << "<<: ";
        cin >> (pa)[i];
    }
}

void show(double da[], const int Seasons)
{
    using namespace std;
    double total = 0.0;
    cout << "\nWydatki\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << char_arr[i] << ": " << da[i] << " zl" << endl;
        total += da[i];
    }
    cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
}