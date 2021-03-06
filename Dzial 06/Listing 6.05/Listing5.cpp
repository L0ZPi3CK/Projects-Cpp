#include <iostream>

const int ArSize = 6;

int main()
{
    using namespace std;
    float naaq[ArSize];
    cout << "Podaj wartosci WPNW (Wspolczynniki Podatnosci Na Wplywy) "
        << "\nswoich sasiadow. Dzialanie programu zakonczy sie "
        << "po podaniu\n" << ArSize << " wartosci "
        << "lub po podaniu wartosci ujemnej.\n";
    
    int i = 0;
    float temp;
    cout << "Wartosc pierwsza: ";
    cin >> temp;    
    while (i < ArSize && temp >= 0) // 2 warunki przerwania
    {
        naaq[i] = temp;
        ++i;
        if (i < ArSize)        // W tablicy jest miejsce
        {
            cout << "Nastepna wartosc: ";
            cin >> temp;                    //wiec pobieramy nastepna wartosc
        }
    }
    if (i == 0)
        cout << "Brak danych - pa pa.\n";
    else
    {
        cout << "Podaj swoj WPNW: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++)
            if (naaq[j] > you)
                ++count;
        cout << count;
        cout << " twoi sasiedzi sa bardziej podatni na wplywy\n"
            << "niz ty.\n";
    }
    return 0;
}

