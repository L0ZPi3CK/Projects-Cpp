#include <iostream>

const int Fave = 27;

int main()
{
    using namespace std;
    int n;

    std::cout << "Szukaj mojej ulubionej liczby - mieści sie";
    cout << "w zakresie 1 -100: ";
    do
    {
        cin >> n;
        if (n < Fave)
            cout << "Za malo -- proboj dalej: ";
        else if (n > Fave)
            cout << "Za duzo -- proboj dalej: ";
        else
            cout << Fave << " to jest to!\n";

    } while (n != Fave);
        return 0;
}
