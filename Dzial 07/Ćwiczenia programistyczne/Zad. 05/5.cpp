#include <iostream>

int silnia(int n);

int main()
{
    using namespace std;
    int x;
    cout << "Podaj liczbe: ";
    cin >> x;
    cout << "Silnia z " << x << " wynosi: " << silnia(x);
}

int silnia(int n)
{
    if (n < 2)
    {
        return 1;
    }

    return n * silnia(n - 1);
}