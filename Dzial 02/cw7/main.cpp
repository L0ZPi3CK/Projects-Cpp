#include <iostream>

using namespace std;
int godzina;
int minuty;

int main()
{
    cout << "Podaj liczbe godzin" << endl;
    cin >> godzina;
    cout << "Podaj liczbe minut" <<endl;
    cin >> minuty;

    cout << "Czas: " << godzina << ":" <<minuty;

    return 0;
}
