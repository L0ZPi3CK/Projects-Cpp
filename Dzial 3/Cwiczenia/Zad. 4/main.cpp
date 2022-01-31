#include <iostream>



int main()
{
    using namespace std;
    long long sekundy;
    const int d = 24;
    const int h = 60;
    const int m = 60;
    int  dzien, godzina, minuta, sekunda;

    cout << "Podaj liczbe sekund: ";
    cin >> sekundy;

    dzien = sekundy / (m * h * d);
    cout << "Dni = " << dzien << endl;

    godzina = (sekundy - (dzien * m * h * d)) / (h * m);
    cout << "Godzin = " << godzina << endl;

    minuta = ((sekundy - (dzien * m * h * d)) - (godzina * h * m)) / h;
    cout << "Minut = " << minuta << endl;

    sekunda = ((sekundy - (dzien * m * h * d)) - (godzina * h * m)) - (minuta * h);
    cout << "Sekund = " << sekunda << endl;
    return 0;
}
