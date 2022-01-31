#include <iostream>
using namespace std;

int miesiace(int);
int main()
{
    int wiek;
    cout << "Podaj swoj wiek" << endl;
    cin >> wiek;
    int czas = miesiace(wiek);
    cout << wiek << " lat = ";
    cout << czas << " miesiecy";
    return 0;
}

int miesiace(int m)
{
    return 12 * m;
}