#include <iostream>


int main()
{

    using namespace std;

    int limit;

    cout << "Podaj wartosc poczatkowa odliczania: " << endl;
    cin >> limit;

    int i;

    for (i = limit; i; i--)
        {
            cout << "i = " << i << "\n";
        }
    cout << "Gotowe, i = " << i << "\n";
    return 0;
}
