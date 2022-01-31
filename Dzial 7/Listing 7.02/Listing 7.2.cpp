#include <iostream>

void cheers(int);           // brak wartosci zwracanej
double cube(double x);     // zwracana wartosc double

int main()
{
    using namespace std;
    cheers(5);              // wywolanie funkcji
    cout << "Podaj liczbe: ";
    double side;
    cin >> side;
    double volume = cube(side); // wywolanie funkcji
    cout << "Kostka majaca bok " << side << " cm ma pojemnosc ";
    cout << volume << " centymetrow szesciennych.\n";
    cheers(cube(2));    //dziala ochrona prototypu
    return 0;
}

void cheers(int n)
{

    using namespace std;

    for (int i = 0; i < n; i++)
        cout << "Czesc!";
    cout << endl;

}

double cube(double x)
{
    return x * x * x;
}