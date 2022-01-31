#include <iostream>

int main()
{

    using namespace std;

    double x;
    double liczba = 1;

    while (liczba != 0)
    {
        cout << "Podaj liczbe: ";
        cin >> liczba;

        x += liczba;
    }
    cout << "\nSuma liczb: " << x;


    return 0;
}
