#include <iostream>

template <typename T>
auto adres(T& la)
{
    using namespace std;
    cout << &la;
}

template <typename T>
auto adres(T& la, int x)
{
    using namespace std;
    for (int i =0; i < x; i++)
    {
        cout << &la << ",\n";
    }    
}

int main()
{
    using namespace std;
    const int ArSize = 15;

    // lancuch
    char pd[ArSize];

    cout << "Siema tu powinien byc adres lancucha: ";
    adres(pd);

    cout << "\nA teraz wpisz se cos(tylko liczbe kurna): ";
    int z;
    cin >> z;
    adres(pd, z);
}