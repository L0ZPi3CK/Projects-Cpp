#include <iostream>
#include <algorithm>
#include <functional>


int main()
{

    using namespace std;

    int liczby [2] = {};

    cout << "Podaj pierwsza liczbe calkowita: ";
    cin >> liczby[0];

    cout << "Podaj druga liczbe calkowita: ";
    cin >> liczby[1];

    sort ( liczby, liczby + 2);

    int y = 0;

    //cout << "L1 = " << liczby[0] << "\nL2 = " << liczby[1];

    for (liczby[0]; liczby[0] <= liczby[1]; liczby[0]++)
        y += liczby[0];

    cout << "Suma wszystkich liczb = " << y;

    return 0;
}
