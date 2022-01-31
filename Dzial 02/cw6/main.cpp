#include <iostream>
#include <math.h>
using namespace std;
double latswie;
int zamiana(int);
int main()
{
    cout << "Podaj liczbe lat swietlnych " << endl;
    cin >> latswie;
    int jedas = zamiana(latswie);
    cout << latswie << " lat swietlnych to ";
    cout << jedas << " jednostek astronomicznych.";
    return 0;
}

int zamiana(int z)
{
    int jedas = 63240 * latswie;
    return jedas;
}
