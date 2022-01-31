#include <iostream>

int metry(int);

int main()
{
    using namespace std;
    int mile;
    cout << "Podaj mile morskie ";
    cin >> mile;
    int odleglosc = metry(mile);
    cout << mile << " mil = ";
    cout << odleglosc << " metrow" << endl;
    return 0;
}

int metry(int sts)
{
    return 1852 * sts;
}
